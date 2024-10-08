#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

void printVector(const vector<int>& vec) {
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Initialize a vector
    vector<int> vec = {4, 1, 3, 9, 2};

    // 1. Using Iterators for Traversal
    cout << "Original vector: ";
    printVector(vec);

    cout << "Using iterators to traverse the vector: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // Dereferencing the iterator
    }
    cout << endl;

    // 2. Using Reverse Iterators
    cout << "Using reverse iterators: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " "; // Dereferencing the reverse iterator
    }
    cout << endl;

    // 3. Modifying Elements using Iterators
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it += 1; // Increment each element by 1
    }
    cout << "Vector after modifying elements: ";
    printVector(vec);

    // 4. Using Iterator to Sort the Vector
    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    printVector(vec);

    // 5. Using Distance Function
    cout << "Distance between first and last element: "
         << distance(vec.begin(), vec.end()) << endl;

    // 6. Using Find Algorithm with Iterators
    auto it = find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        cout << "Element 3 found at index: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "Element 3 not found in the vector." << endl;
    }

    // 7. Erasing an Element using Iterator
    vec.erase(it); // Erase the element found
    cout << "Vector after erasing element 3: ";
    printVector(vec);

    // 8. Using Iterator to Insert Elements
    vec.insert(vec.begin() + 2, 5); // Insert 5 at index 2
    cout << "Vector after inserting 5 at index 2: ";
    printVector(vec);

    return 0;
}
