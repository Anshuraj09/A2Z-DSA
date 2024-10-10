#include<bits/stdc++.h>
using namespace std;
int n=0;
 void ntimes(){
    if(n==5){
        return; 
    }
    cout<<n<<" ";
    n++;
    ntimes();
}   
void nnames(int n){
    if(n==0) return;
    cout<<"GFG";
    nnames(n-1);
} 
void ncube(int n){
     long long s=n*(n+1)/2;
     long long sos=s*s;
    cout<<sos<<" ";    
}
void fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f *=i;
    }
    cout<<f<<" ";
}
void factless(int n){
    int f=1;
        for(int i=1;i<=n;i++){
            f *=i;
        if(f<=n){
            cout<<f<<" ";
        }
        else {
            break;
        }  
    }
}
int main(){
    int n;
    cin>>n;
    factless(n);
    return 0;
 }