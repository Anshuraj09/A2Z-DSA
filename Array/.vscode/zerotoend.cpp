#include <iostream>
using namespace std;
void zeroend(int n, int arr[]) {
    int j = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i; 
            break; 
        }
    }
    if (j == -1) return;
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); 
            j++; 
        }
    }
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
        zeroend(n, arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}
