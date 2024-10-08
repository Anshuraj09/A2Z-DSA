#include <iostream>
using namespace std;

// Function to count digits that divide the number evenly
void evenly(int n) {
    int count = 0;
    int original = n;
    while (n > 0) {
        int t = n % 10;  
        if (t != 0 && original % t == 0) {
            count++;
        }
        n = n / 10;  // Remove the last digit
    }
    cout << count << endl;
}
int main() {
    int t;  // Number of test cases
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        evenly(n);  // Call the function for each test case
    }
    return 0;
}
