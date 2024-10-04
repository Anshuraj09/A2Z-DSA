#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int a=0,b=1,c;
        for(int i=0;i<n;i++){
                c=a+b;
                a=b;
                b=c;
        }
        cout<<a<<endl;
}