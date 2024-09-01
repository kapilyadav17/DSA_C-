#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter m : ";cin>>m;
    cout<<"enter n : ";cin>>n;
    for(int i=1 ; i<=m ; i++){
        for(int j=1 ; j<=n ; j++){
            cout<<j ;
        }
        cout<<"\n";
    }
    return 0;
}