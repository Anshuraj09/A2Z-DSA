#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>    // For accumulate
#include <iterator>   // For set operations

int main() {
    // 1. Create a vector of integers
    std::vector<int> v = {5, 3, 9, 1, 7, 2, 8, 6};

    // 2. Sort the vector
    std::sort(v.begin(), v.end());
    std::cout << "Sorted: ";
    for (const auto& num : v) std::cout << num << " ";
    std::cout << std::endl;

    // 3. Reverse the vector
    std::reverse(v.begin(), v.end());
    std::cout << "Reversed: ";
    for (const auto& num : v) std::cout << num << " ";
    std::cout << std::endl;

    // 4. Find the minimum and maximum elements
    auto min_it = std::min_element(v.begin(), v.end());
    auto max_it = std::max_element(v.begin(), v.end());
    std::cout << "Min element: " << *min_it << std::endl;
    std::cout << "Max element: " << *max_it << std::endl;

    // 5. Find the sum of all elements
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl;

    // 6. Search for an element in the vector
    auto it = std::find(v.begin(), v.end(), 5);
    if (it != v.end()) {
        std::cout << "Element 5 found!" << std::endl;
    } else {
        std::cout << "Element 5 not found!" << std::endl;
    }

    // 7. Replace all occurrences of 6 with 10
    std::replace(v.begin(), v.end(), 6, 10);
    std::cout << "After replacing 6 with 10: ";
    for (const auto& num : v) std::cout << num << " ";
    std::cout << std::endl;

    // 8. Partition the vector into even and odd numbers
    std::partition(v.begin(), v.end(), [](int x){ return x % 2 == 0; });
    std::cout << "After partition (evens first): ";
    for (const auto& num : v) std::cout << num << " ";
    std::cout << std::endl;

    // 9. Set operations: Union, Intersection, Difference
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {3, 4, 5, 6, 7};

    std::vector<int> v_union(v1.size() + v2.size());
    std::vector<int> v_intersection(v1.size());
    std::vector<int> v_difference(v1.size());

    // 9a. Set Union
    auto union_end = std::set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v_union.begin());
    v_union.resize(union_end - v_union.begin());
    std::cout << "Set Union: ";
    for (const auto& num : v_union) std::cout << num << " ";
    std::cout << std::endl;

    // 9b. Set Intersection
    auto intersection_end = std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v_intersection.begin());
    v_intersection.resize(intersection_end - v_intersection.begin());
    std::cout << "Set Intersection: ";
    for (const auto& num : v_intersection) std::cout << num << " ";
    std::cout << std::endl;

    // 9c. Set Difference (v1 - v2)
    auto difference_end = std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v_difference.begin());
    v_difference.resize(difference_end - v_difference.begin());
    std::cout << "Set Difference (v1 - v2): ";
    for (const auto& num : v_difference) std::cout << num << " ";
    std::cout << std::endl;

    // 10. Heap Operations
    std::vector<int> heap = {10, 20, 15, 30, 40};
    std::make_heap(heap.begin(), heap.end());
    std::cout << "Initial max heap: ";
    for (const auto& num : heap) std::cout << num << " ";
    std::cout << std::endl;

    // Push a new element onto the heap
    heap.push_back(50);
    std::push_heap(heap.begin(), heap.end());
    std::cout << "After push_heap(50): ";
    for (const auto& num : heap) std::cout << num << " ";
    std::cout << std::endl;

    // Pop the largest element from the heap
    std::pop_heap(heap.begin(), heap.end());
    heap.pop_back();
    std::cout << "After pop_heap(): ";
    for (const auto& num : heap) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
