#include <stdio.h>
#include <stdlib.h>

// Structure for each node in the Huffman Tree
struct MinHeapNode {
    char data;             // Input character
    unsigned freq;         // Frequency of the character
    struct MinHeapNode* left, * right; // Left and right children
};

// Structure for the min-heap: a collection of nodes
struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode** array;
};

// A utility function to create a new min heap node
struct MinHeapNode* newNode(char data, unsigned freq) {
    struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));

    temp->data = data;
    temp->freq = freq;
    temp->left = temp->right = NULL;

    return temp;
}

// A utility function to create a min-heap of a given capacity
struct MinHeap* createMinHeap(unsigned capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));

    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));

    return minHeap;
}

// A utility function to swap two min heap nodes
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

// The standard min-heapify function
void minHeapify(struct MinHeap* minHeap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx) {
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

// A utility function to check if the size of the heap is 1
int isSizeOne(struct MinHeap* minHeap) {
    return (minHeap->size == 1);
}

// A utility function to extract the minimum value node from the heap
struct MinHeapNode* extractMin(struct MinHeap* minHeap) {
    struct MinHeapNode* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];

    --minHeap->size;
    minHeapify(minHeap, 0);

    return temp;
}

// A utility function to insert a new node to the min heap
void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode) {
    ++minHeap->size;
    int i = minHeap->size - 1;

    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = minHeapNode;
}

// A standard function to build a min heap
void buildMinHeap(struct MinHeap* minHeap) {
    int n = minHeap->size - 1;
    for (int i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}

// A utility function to print an array of size n
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf("\n");
}

// A utility function to check if this node is a leaf
int isLeaf(struct MinHeapNode* root) {
    return !(root->left) && !(root->right);
}

// Creates a min heap of capacity equal to size and inserts all characters
struct MinHeap* createAndBuildMinHeap(char data[], int freq[], int size) {
    struct MinHeap* minHeap = createMinHeap(size);

    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);

    minHeap->size = size;
    buildMinHeap(minHeap);

    return minHeap;
}

// The main function that builds the Huffman Tree and prints Huffman Codes
struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
    struct MinHeapNode* left, * right, * top;

    // Step 1: Create a min heap
    struct MinHeap* minHeap = createAndBuildMinHeap(data, freq, size);

    // Iterate while the size of the heap doesn't become 1
    while (!isSizeOne(minHeap)) {
        // Step 2: Extract the two minimum frequency nodes
        left = extractMin(minHeap);
        right = extractMin(minHeap);

        // Step 3: Create a new internal node with frequency equal to the sum of the two nodes' frequencies
        top = newNode('$', left->freq + right->freq);

        top->left = left;
        top->right = right;

        // Step 4: Add this node to the heap
        insertMinHeap(minHeap, top);
    }

    // The remaining node is the root node
    return extractMin(minHeap);
}

// Print Huffman codes from the root of Huffman Tree
void printCodes(struct MinHeapNode* root, int arr[], int top) {
    // Assign 0 to left edge and recurse
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    // Assign 1 to right edge and recurse
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    // If this is a leaf node, then it contains one of the input characters
    if (isLeaf(root)) {
        printf("%c: ", root->data);
        printArray(arr, top);
    }
}

// The main function that builds a Huffman Tree and prints Huffman Codes for given characters and frequencies
void HuffmanCodes(char data[], int freq[], int size) {
    struct MinHeapNode* root = buildHuffmanTree(data, freq, size);

    int arr[100], top = 0;
    printCodes(root, arr, top);
}

// Driver program to test the above functions
int main() {
    // Example input: characters and their frequencies
    char data[] = { 'a', 'b', 'c', 'd', '$', '#', '!' };
    int freq[] = { 5, 9, 12, 13, 16, 45, 3 };

    int size = sizeof(data) / sizeof(data[0]);

    HuffmanCodes(data, freq, size);

    return 0;
}
