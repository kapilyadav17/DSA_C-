//WE CAN ALSO MAKE THE CHARACTER VECTOR , FLOAT VECTOR ETC.
#include<iostream>
#include<vector>
using namespace std;
//template <class T>
void display(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> vec1(6,3); // it will print the 3s , 6 times.
    display(vec1);
}