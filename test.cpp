#include<iostream>
using namespace std;
class kapil{
    public:
 string girlfriend;
 int age;
 int money;


kapil(){
    cout<<"this is default constructor."<<endl;
}

kapil(string GF , int a , int m){
    girlfriend = GF;
    age = a;
    money = m;
}



void setname(string GF){
    girlfriend = GF;
}

void getname(){
    cout<<girlfriend<<endl;
}



void printinfo(){
    cout<<"My Girlfriend is : "<<girlfriend<<endl;
    cout<<"My age is : "<<age<<endl;
    cout<<"My Net Worth is : "<<money;
}




};
class Edward{
    public:
    string GF;
    int age;
    int money;
};
int main(){
    kapil b("Neha",22,12);
    b.printinfo();
    return 0;
}