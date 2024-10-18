#include<iostream>
using namespace std;
void leftrotate(int n,int arr[]){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotatebyone(int n, int arr[]) {
    int temp = arr[0];  
    for(int i = 1; i < n; i++) {
        arr[i-1] = arr[i];  
    }
    arr[n-1] = temp;  
}
void leftrotate(int n, int arr[], int k) {
    for(int i = 0; i < k; i++) {
        leftrotatebyone(n, arr);  
    }
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
       // cin >> k;
        leftrotate(n, arr);  // Rotate array k times
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
