//Print any table in reverse order
#include<iostream>
using namespace std;
int main(){
    int n,i,f;
    cout<<"Enter the table u want=";
    cin>>n;
    for(i=10;i>=1;i--){
      f=n*i;
      cout<<f<<endl;
    }
}