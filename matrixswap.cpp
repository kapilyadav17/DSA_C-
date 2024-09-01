#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of array(here we have square matrix so , rows = columns : ";cin>>n;
    int arr[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"Enter the Element : "<<i<<j;cin>>arr[i][j];
        }
    }
    cout<<"now we will print the transpose of the matrix : ";
            for(int i=0 ; i<n ; i++){
                for(int j=i ; j<n ;j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
    }
    }
     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
           cout<<arr[i][j];
        }
     }
    return 0;
}