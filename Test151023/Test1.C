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
int main(){
    int n;
    cout<<"Enter the pattern no. u want:";
    cin>>n;
    boxfill(n);
}