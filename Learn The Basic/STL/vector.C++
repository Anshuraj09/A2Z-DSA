#include <iostream>
#include <vector>
#include <algorithm>  // For sort, reverse
using namespace std;

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";  // Range-based for loop
    cout << endl;
}

int main() {
    // 1. Initialization
    vector<int> vec1;              // Empty vector
    vector<int> vec2(5, 10);       // Vector of size 5, all elements initialized to 10
    vector<int> vec3 = {1, 2, 3};  // Initializer list

    cout << "Vector vec2 (initialized with 5 elements of 10): ";
    printVector(vec2);

    // 2. Insertion
    vec1.push_back(1);     // Insert at the end
    vec1.push_back(2);
    vec1.insert(vec1.begin(), 0);    // Insert at the beginning
    vec1.insert(vec1.begin() + 2, 3); // Insert at specific position

    cout << "Vector vec1 after insertion: ";
    printVector(vec1);

    // 3. Deletion
    vec1.pop_back();        // Remove the last element
    vec1.erase(vec1.begin()); // Remove first element
    vec1.erase(vec1.begin() + 1); // Remove element at index 1

    cout << "Vector vec1 after deletion: ";
    printVector(vec1);

    // 4. Accessing elements
    cout << "Element at index 1 in vec1: " << vec1[1] << endl;      // Access using index
    cout << "First element in vec1: " << vec1.front() << endl;     // Access the first element
    cout << "Last element in vec1: " << vec1.back() << endl;       // Access the last element

    // 5. Traversal
    cout << "Vector vec3 using range-based loop: ";
    printVector(vec3);

    cout << "Vector vec3 using iterator: ";
    for (auto it = vec3.begin(); it != vec3.end(); ++it) {
        cout << *it << " ";  // Iterator traversal
    }
    cout << endl;

    // 6. Capacity operations
    cout << "Size of vec3: " << vec3.size() << endl;              // Number of elements
    cout << "Capacity of vec3: " << vec3.capacity() << endl;      // Capacity of vector
    vec3.resize(5, 0);  // Resizing vector to size 5, with new elements initialized to 0
    cout << "Vector vec3 after resizing: ";
    printVector(vec3);

    vec3.reserve(10);  // Reserve capacity for 10 elements
    cout << "Capacity of vec3 after reserving: " << vec3.capacity() << endl;

    // 7. Modifiers
    vec1.clear();  // Remove all elements
    cout << "Size of vec1 after clearing: " << vec1.size() << endl;  // Should be 0

    vec3.assign(7, 100);  // Assign new values to vec3, 7 elements, all 100
    cout << "Vector vec3 after assign: ";
    printVector(vec3);

    // 8. Swap vectors
    vec1 = {1, 2, 3};
    cout << "Vector vec1 before swap: ";
    printVector(vec1);
    vec1.swap(vec3);  // Swap vec1 and vec3
    cout << "Vector vec1 after swap: ";
    printVector(vec1);
    cout << "Vector vec3 after swap: ";
    printVector(vec3);

    // 9. Sorting and reversing
    sort(vec1.begin(), vec1.end());   // Sort in ascending order
    cout << "Vector vec1 after sorting: ";
    printVector(vec1);

    reverse(vec1.begin(), vec1.end());  // Reverse the vector
    cout << "Vector vec1 after reversing: ";
    printVector(vec1);

    return 0;
}
