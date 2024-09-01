#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"this is the base class's print function"<<endl;
    }
    void display(){
        cout<<"This is the base class's display function."<<endl;
    }
};
class derived : public base{
    public:
   void print(){
        cout<<"this is the derived class's print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class's display function."<<endl;
    }
};
int main(){
    base *basepointer;
    derived d;
    basepointer = &d;
    basepointer->print();
    basepointer->display();
    return 0;
}
