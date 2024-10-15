#include<iostream>
using namespace std;
int removeduplicatearr(int n,int arr[]){
  if(n==0) return 0;
     int j=0;
     for(int i=1;i<n;i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
     }
     return j+1;
}
int main(){
    int n;
    cout<<"Enter the element:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //newadd
    int newSize=removeduplicatearr(n,arr);
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}