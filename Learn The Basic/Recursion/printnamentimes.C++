#include <iostream>
using namespace std;
void printName(int n) {
    if (n == 0) return;  // Base case: when n reaches 0, stop the recursion.
    cout << "Anshu Raj" << endl;  // Print the name.
    printName(n - 1);  // Recursive call, reducing n by 1.
}
int main() {
    int n;
    cout << "Enter how many times to print the name: ";
    cin >> n;
    printName(n);  // Call the recursive function.
    return 0;
}
