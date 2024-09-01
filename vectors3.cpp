//WE CAN ALSO MAKE THE CHARACTER VECTOR , FLOAT VECTOR ETC.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<"the another method of printing the vector is : "<<endl;
    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i);
    }
     cout<<"the another method of printing the vector is : "<<endl;
     vector<int> ::iterator it;
     for(it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<endl;
     }
}
int main(){
    vector<int> v;
    int n;
    int key;
    cout<<"enter the number of vectors you want to add in this : ";cin>>n;
    for(int i=0 ; i<n ; i++){
        cout<<"enter the vector you want to add : ";cin>>key;
        v.push_back(key);
    }
    display(v);
    vector<int> ::iterator iter = v.begin(); //here we have declared an iterator that is pointing to the begining of the vector v;
    v.insert(iter,500,78);//here 78 will be inserted in the beginging.
    //v.pop_back();
    display(v);
}