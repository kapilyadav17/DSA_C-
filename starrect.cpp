#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows you want to create in the star rectangle : ";cin>>m;
    cout<<"enter the number of columns in the rectangle : ";cin>>n;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
           cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}