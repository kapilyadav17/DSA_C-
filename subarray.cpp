#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter the "<<i+1<<" Element : ";cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            for(int k=i ; k<=j ; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}