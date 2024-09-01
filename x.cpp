#include<iostream>
using namespace std;
class Eicher{
    public:
    string model;
    int number;
    float price;
    Eicher(){}
    Eicher(string m , int n, float p){
        model = m;
        number = n;
        price = p;
        cout<<"Eicher Motors is an Indian Automobile Manufacturer"<<endl;
    }
    void getname(){
        cout<<"The Model is : "<<model<<endl;
        cout<<"The Number of models oredered are : "<<number<<endl;
        cout<<"The Price of your models are : "<<price<<endl;
    }
};
class RoyalEnfield : virtual public Eicher{
    public:
    RoyalEnfield(string m,int n,float p) : Eicher(m,n,p){};
    void display(){
        cout<<"The Model of your Royal Enfield is : "<<model<<endl;
        cout<<"Number of Models ordered are : "<<number<<endl;
        cout<<"Price of Your All Models is : "<<price<<endl;
    }
};

//now we will do multilevel inheritance.
class Hero : virtual public RoyalEnfield{
    public:
    Hero(string m, int n, float p) : RoyalEnfield(m,n,p){};
    void output(){
        cout<<"The Model of your Hero Vehicle is : "<<model<<endl;
        cout<<"The Number of Models Produced are "<<number<<endl;
        cout<<"The Price of Models is : "<<price<<endl;
    }
};

//here we will do multiple inheritance.
class Bajaj : virtual public Hero , virtual public RoyalEnfield{
       public:
       Bajaj(string m, int n, float p) : Hero(m,n,p), RoyalEnfield(m,n,p){};
       void printinfo(){
        cout<<"The Model of your Bajaj is : "<<model<<endl;
        cout<<"The Number of Models Produced are "<<number<<endl;
        cout<<"The Price of Models is : "<<price<<endl;
       }
};
int main(){
    Eicher Canter("Canter",487,1200000);
    Canter.getname();
    RoyalEnfield Bullet("Classic 350",10,50000);
    Bullet.display();
    Bajaj Freedom("Freedom CNG 125",500,95899);
    Freedom.printinfo();
    Hero Splendor("Splendor Plus",40000,89999);
    Splendor.output();

}