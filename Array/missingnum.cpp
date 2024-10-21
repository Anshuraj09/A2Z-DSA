/*#include<iostream>
using namespace std;
int missingnum(int n,int arr[]){
    for(int i=1;i<n;i++){
        bool flag=0;
       for(int j=0;j<n-1;j++){
          if(arr[j]==i){
            flag=1;
            break;
          }
       }
       if(flag==0){
        return i;
       };
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        missingnum(n,arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int missingnum(int n, int arr[]) {
    for (int i = 1; i <= n; i++) {  // Search for a missing number from 1 to n
        bool flag = false;          // Initialize flag to check if the number exists in the array
        for (int j = 0; j < n; j++) {  // Loop to search the array
            if (arr[j] == i) {
                flag = true;        // If number is found, set flag to true
                break;
            }
        }
        if (!flag) {                // If flag remains false, return the missing number
            return i;
        }
    }
    return -1;  // Return -1 if no number is missing (optional in this case)
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        // Read the array input
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // Capture the missing number
        int missing = missingnum(n, arr);
        // Print the missing number;
        cout << "Missing number: " << missing << endl;
    }

    return 0;
}

