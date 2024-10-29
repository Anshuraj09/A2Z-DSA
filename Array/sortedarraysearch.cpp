#include <bits/stdc++.h>
using namespace std;

bool sortedarray(int n, int arr[], int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return true; 
        }
    }
    return false; 
}
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        } 
        int k;
        cin >> k; 
        bool result = sortedarray(n, arr, k); 
        cout << "Result: " << (result ? "Found" : "Not Found") << endl; 
    }
    return 0;
}
