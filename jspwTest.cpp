//https://www.codechef.com/START158D/problems/XORSMALL
//https://www.codechef.com/START158D/problems/DIWALIDISC
#include <bits/stdc++.h>
using namespace std;
int countValidX(int n, vector<int>& A) {
    int validX = 0;
    for (int x = 1; x < (1 << 30); ++x) {
        bool isValid = true;
        for (int i = 0; i < n; i++) {
            if ((x ^ A[i]) >= A[i]) {
                isValid = false;
                break;
            }
        }
        if (isValid) validX++;
    }
    return validX;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int result = countValidX(N, A);
        cout << result << endl;
    }
    return 0;
}
