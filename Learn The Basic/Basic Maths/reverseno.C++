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
        int sum=0;
        while(n>0){
       for(int i=1;i<=n;i++){
        if(n%i==0){
            sum +=i;
        }
     } 
     n--;
 } 
 cout<<sum<<" ";
}
int sumalldivisor(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum +=(N/i)*i;
    }
    cout<<sum<<" ";
}
int prime(int n){
    for(int i=1;i<=n;i++){
        int t=n%i;
        if(t==0 && i%1==0 && i%n==0){
            cout<<"prime";
        }
        else {
            cout<<"No";
        }
      }   
}
int prime2(int n) {
    // Special cases: 1 is not prime, numbers less than 1 are not prime
    if (n <= 1) {
        cout << "No" << endl;
        return 0;
    }
    // Loop from 2 to n-1 and check if n is divisible by any number
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "No" << endl;  // Found a divisor, not prime
            return 0;
        }
    }
    cout << "Prime" << endl;  // No divisors found, n is prime
    return 1;
}
int GCD(int n1,int n2){
    int gcd=1;
   for(int i=1;i<=n1 && i<=n2;i++){
    if(n1%i==0 && n2%i==0){
        gcd=i;
    }
   }
   cout<<gcd<<" ";
}
int GCD2(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        GCD2(a,b);
    }
}
