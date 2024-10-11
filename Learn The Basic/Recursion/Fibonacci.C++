#include<iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int sfirst=fib(n-1);
        int slast=fib(n-2);
        return sfirst+slast;/* Time limit exceeds*/
        
    }
};
int main(){
    int n;
    cin>>n;
    Solution o;
    cout<<o.fib(n)<<" ";
    return 0;
}