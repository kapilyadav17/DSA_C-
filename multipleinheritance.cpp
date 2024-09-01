#include<iostream>
using namespace std;
class A{
    public:
    void  Afunc(){
        cout<<"this is function A"<<endl;
    }
};
class B : public A{
    public:
    void Bfunc(){
        cout<<"this is function B"<<endl;
    }
};
class C : public A,public B{
   public:
};
int main(){
    B b;  //here b,a,c are instance also known as the objects.
    b.Afunc();
    A a;
    a.Afunc();
    C c;
    c.Bfunc();
    b.Bfunc();
}