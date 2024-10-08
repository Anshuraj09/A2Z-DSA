//count the number input
#include<iostream>
using namespace std;
int count(int n){
    int cnt=0;
    while(n>0){
        int lastDigit=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        count(n);
    }
}
