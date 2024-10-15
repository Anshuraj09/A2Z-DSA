#include<iostream>
using namespace std;
int diamond(int n){
      for(int i=0;i<n;i++){
           //sapce
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            //pattern
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            //space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
      }
      for(int i=0;i<n;i++){
           //sapce
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            //pattern
            for(int j=0;j<2*n-(2*i+1);j++){
                cout<<"*";
            }
            //space
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            cout<<endl;
      }
} 
void halfbutterfly(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void butterfly(int n){
     for(int i=0;i<n;i++){
        //pattern
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-(2*i+3);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
     }
     for(int i=0;i<n;i++){
        //pattern
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
void boxfill(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-(2*i);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
void square(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout <<n-1<<" ";
            }
        else if (i == 1 || j == 1 || i==n-2 || j==n-2) {
            cout<<n-2<<" ";
        }
        else if (i == 2 || j == 2 || i==n-3 || j==n-3) {
            cout<<n-3<<" ";
        }
        else if (i == 3 || j == 3 || i==n-4 || j==n-4) {
            cout<<n-4<<" ";
        }
            else {
                cout << " ";
            }
        }
        cout<<endl;
   }
}
void square1(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the pattern no. u want:";
    cin>>n;
    square1(n);
}