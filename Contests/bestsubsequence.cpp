#include <bits/stdc++.h>
using namespace std;
int best(int n, int arr[]) {
    int bitwise_or_result = 0;
    for (int i = 0; i < n; i++) {
        bitwise_or_result |= arr[i];
    }
    int set_bits_count = __builtin_popcount(bitwise_or_result);
    int max_value = n - set_bits_count;
    return max_value;
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

        int result = best(n, arr);
        cout << result << endl;
    }
    
    return 0;
}
