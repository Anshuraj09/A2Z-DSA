#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//Coding Ninja
/*void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<< "* ";
		}
		cout<< endl;
	}
}*/
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int x(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }
}

