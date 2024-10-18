#include<iostream>
using namespace std;
int fibonacci(int n){
    int fib(int n){
        if(n<=1) return;
    }
    int sf=fib(n-1);
    int sl=fib(n-2);
    return sf+sl;
}
int main(){
   int t;
   cout<<"Enter how many cases u need=";
   cin>>t;
   int n;
   for(int i=0;i<t;i++){
    fibonacci(n);
   }
}