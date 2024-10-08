//Reverse 123->321
#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
    int rev=0;
    while(x>0){
        int lastd=x%10;
        rev=(rev*10)+lastd;
        x=x/10;
    }
    cout<<rev;
}
int palindrome(int n){
    int original=n;
    int rev=0;
    while(n>0){
        int lastd=n%10;
        rev=(rev*10)+lastd;
        n=n/10;
    }
    cout<<rev;
    if(rev==original){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
int Armstrong(int n){
   int sum=0;
   int original=n;
   while(n>0){
    int t=n%10;
    sum +=t*t*t;
    n=n/10;
   }
   if(sum==original){
    cout<<"yes";
   }
   else{
    cout<<"No";
   }
}
int printalldivisor(int n){
    int t;
    for(int i=1;i<=n;i++){
        t=n%i;
        if(t==0){
            cout<<i<<" ";
        }
    }
}
int smalldivisor1ton(int n){
        int t;
       for(int i=1;i<=n;i--){
        t=n%i;
        if(t==0){
            cout<<i<<" ";
        }
     } 
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        smalldivisor1ton(n);
    }
}
