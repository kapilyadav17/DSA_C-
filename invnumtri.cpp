#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    int count = 1;
    // for(int i=n ; i>=1 ; i--){
    //     for(int j=1 ; j<=i ; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n+1-i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}