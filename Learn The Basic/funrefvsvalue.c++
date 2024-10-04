#include <iostream> // Include for input and output
#include <vector>   // Include for using vector
using namespace std;

class Solution {
public:
    vector<int> passedBy(int a, int &b) {
        // Modify the values
        a = a + 1; // Pass by value, 'a' is modified locally
        b = b + 2; // Pass by reference, 'b' is modified directly
        
        vector<int> ba; // Create a vector to store the results
        ba.push_back(a); // Add modified 'a' to the vector
        ba.push_back(b); // Add modified 'b' to the vector
        
        return ba; // Return the vector
    }
};

int main() {
    Solution sol; // Create an object of the Solution class
    int x = 5; // Original value for 'a'
    int y = 10; // Original value for 'b'
    
    // Call the method
    vector<int> output = sol.passedBy(x, y);
    
    // Print the results
    cout << "Output values: " << output[0] << " " << output[1] << endl; // Output of the vector
    cout << "Original value of x (passed by value): " << x << endl; // 'x' should remain unchanged
    cout << "Original value of y (passed by reference): " << y << endl; // 'y' should be modified
    
    return 0; // Return success
}
