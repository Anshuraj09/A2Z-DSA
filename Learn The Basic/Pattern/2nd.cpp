#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }

}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i <<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<< " ";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=0;i<n;i++){
         //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){  
        //space
        for(int j=0;j<i;j++){
            cout<< " ";}
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<< " ";
        }
       cout<<endl;
    }
}
void print10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printa(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";}
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
void print12(int n){
     int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number start
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }
}
void numberCrown(int n) {
 // Write your code here.
    for(int i=1;i<=n;i++){
        //number start
        for(int j=1;j<=i;j++){
            cout<< j<<" ";
        }
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<< j<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void print13(int n){
    int num=1;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
        cout<<num;
        num=num+1;
     }
     cout<<endl;
   }
}
void print14(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}
void print16(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+i);
        }
        cout<<endl;
    }
}
void print17(int n){
   for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    //alphabet
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for(int j=1;j<=2*i+1;j++){
        cout<<ch;
        if(j<=breakpoint) ch++;
        else ch--;
    }
    //space
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    cout<<endl;
   }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print9(n);
    }
}

/*Coding Ninja
void nForest(int n) {
	// Write your code here.'
	 for(int i=0;i<n;i++){
		 for(int j=0;j<=i;j++){
			 cout<<"* ";
		 }
		 cout<<endl;
	 }
}
*/