#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    // 1. Sequence Containers
    
    // Vector: Dynamic array
    vector<int> vec = {1, 2, 3, 4};
    vec.push_back(5);    // Insert at the end
    vec.insert(vec.begin(), 0); // Insert at the beginning
    vec.erase(vec.begin() + 2); // Erase element at index 2

    cout << "Vector: ";
    for (int x : vec) cout << x << " "; // Traversal
    cout << endl;
    cout << "Vector element at index 3: " << vec[3] << endl; // Access by index

    // Deque: Double-ended queue
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);    // Insert at the front
    dq.push_back(40);    // Insert at the back
    dq.pop_front();      // Remove from the front
    dq.pop_back();       // Remove from the back

    cout << "Deque: ";
    for (int x : dq) cout << x << " ";  // Traversal
    cout << endl;

    // List: Doubly linked list
    list<int> lst = {100, 200, 300};
    lst.push_front(50);  // Insert at the front
    lst.push_back(400);  // Insert at the back
    lst.remove(200);     // Remove specific value

    cout << "List: ";
    for (int x : lst) cout << x << " "; // Traversal
    cout << endl;

    // 2. Associative Containers
    
    // Set: Sorted unique elements
    set<int> s = {10, 20, 30, 20, 10};  // Duplicates automatically removed
    s.insert(40);      // Insert element
    s.erase(20);       // Remove element

    cout << "Set: ";
    for (int x : s) cout << x << " ";   // Traversal
    cout << endl;
    cout << "Set contains 30? " << (s.count(30) ? "Yes" : "No") << endl;  // Search

    // Map: Key-value pairs
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";
    mp.erase(2);  // Remove key-value pair with key 2

    cout << "Map: ";
    for (auto p : mp) {
        cout << "(" << p.first << ", " << p.second << ") ";  // Traversal
    }
    cout << endl;
    cout << "Map element with key 1: " << mp[1] << endl;  // Access by key

    // 3. Unordered Containers
    
    // Unordered Set: Unordered unique elements
    unordered_set<int> us = {3, 1, 4, 1, 2};  // Duplicates automatically removed
    us.insert(5);      // Insert element
    us.erase(3);       // Remove element

    cout << "Unordered Set: ";
    for (int x : us) cout << x << " ";   // Traversal
    cout << endl;
    cout << "Unordered Set contains 4? " << (us.count(4) ? "Yes" : "No") << endl;  // Search

    // Unordered Map: Key-value pairs without specific order
    unordered_map<string, int> ump;
    ump["Apple"] = 10;
    ump["Banana"] = 20;
    ump["Orange"] = 15;
    ump.erase("Banana");   // Remove key-value pair with key "Banana"

    cout << "Unordered Map: ";
    for (auto p : ump) {
        cout << "(" << p.first << ", " << p.second << ") ";  // Traversal
    }
    cout << endl;
    cout << "Unordered Map element with key 'Apple': " << ump["Apple"] << endl;  // Access by key

    // Algorithm operations (sorting, reversing)
    sort(vec.begin(), vec.end());    // Sorting a vector
    reverse(vec.begin(), vec.end()); // Reversing a vector

    cout << "Sorted and Reversed Vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
