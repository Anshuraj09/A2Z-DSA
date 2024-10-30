//https://www.codechef.com/START158D/problems/EVENODDDIV
//Even vs Odd Divisors
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
        int n;
        cin>>n;
        int f=0,g=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(i%2==0){
                    //cout<<i<<" ";
                    f++;
                }
                else{
                   // cout<<i<<" ";
                    g++;
                }
            }
        }    
            if(f>g){
                cout<<"1";
            }
            else if(f==g){
                cout<<"0";
            }
            else{
                cout<<"-1";
            }
        cout<<endl;
    }
    return 0;
}