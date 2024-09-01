#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void wavesort(int arr[],int n){
    for(int i=1 ; i<n ; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        else if(arr[i]>arr[i+1] &&i<n-2){
            swap(arr,i,i+1);
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array : ";cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"enter the "<<i<<" element : ";cin>>arr[i];
    }
    wavesort(arr,n);
     for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}