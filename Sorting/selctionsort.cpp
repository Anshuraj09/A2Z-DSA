#include<iostream>
using namespace std;
int selection_sort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n-2;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
     bubble_sort(n,arr);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}