#include<iostream>
using namespace std;
int secondLargest(int n, int arr[]) {
    int largest = -1, secondLargest = -1;
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int second_largest = secondLargest(n, arr);
    cout << "Second largest: " << second_largest << endl;
    return 0;
}
