#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[] , int n , int key){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            cout<<"element present at index : ";
            return i;
        }
    }
    cout<<"element not found";
    return -1;
}
int main(){
    int n,key;
    cout<<"enter the size of the array : ";cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
     cout<<"enter the "<<i+1<<" element : ";cin>>arr[i];
    }
    cout<<"enter the element to found : ";cin>>key;
    cout<<linear_search(arr , n , key);
    return 0;
}