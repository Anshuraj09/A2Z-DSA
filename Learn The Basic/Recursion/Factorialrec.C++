#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case: 0! and 1! are 1.
    return n * factorial(n - 1);  // Recursive call to calculate factorial.
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = factorial(num);  // Call the recursive factorial function.
    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}
