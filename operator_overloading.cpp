#include<iostream>
using namespace std;
class complex{
    private:
  int real, imaginery;
  public:
  complex(int r,int i){
    real=r;
    imaginery = i;
  }
  complex operator + (complex const &a){
    complex res;
    res.real = real + a.real;
    res.imaginery = imaginery + a.imaginery;
    return res;
  }
  void display(){
    cout<<real<<" + "<<imaginery<<endl;
  }
};
int main(){
    complex c1(12,7) , c2(6,8);
    complex c3 = c1+c2;
    c3.display();
}