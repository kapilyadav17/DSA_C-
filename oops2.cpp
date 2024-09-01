#include<iostream>
using namespace std;
class Asus{  //it is our base class ASUS. It has 3 member variables - Name , Price and Quantity.
    public:
    string Name;
    float Price;
    int Quantity;
    Asus(string n,float p,int q){ //This is the constructor that initializes these variables .
        Name = n;
        Price = p;
        Quantity = q;
    }
    void printinfo(){  //this function is used to display the insformation.
        cout<<"Name of your Device is : "<<Name<<endl;
        cout<<"Price of your device is : "<<Price<<endl;
        cout<<"Quantity if your devices is : "<<Quantity<<endl;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------


class Zenbook : public Asus{
    public:
    Zenbook(string n , float p , int q) : Asus(n,p,q){ //The Zenbook constructor calls the Asus constructor using the member initializer list (: Asus(n, p, q)).

    }  //The Zenfunc() is specific to Zenbook, and getname() provides an alternative way to display the information.
    void getname(){  //it is also a method to display the information other than printinfo.
        cout<<Name<<endl;
        cout<<Price<<endl;
        cout<<Quantity<<endl;
    }
    void printinfo(){
        cout<<"Name of your Device is : "<<Name<<endl;
        cout<<"Price of your device is : "<<Price<<endl;
        cout<<"Quantity if your devices is : "<<Quantity<<endl;
    }
};


//----------------------------------------------------------------------------------------------------------------------------------------

class VivoBook : public Zenbook{  //now we have vivobook class also inheriting from the Asus.
    public:
    VivoBook(string n , float p , int q) : Zenbook(n,p,q){  //Similar to Zenbook, VivoBook calls the Asus constructor in its own constructor. 
    }
    void Vivofunc(){
        cout<<"VivoBook is a sub brand of Asus"<<endl;
    }
};

int main(){
    Asus ROG("ROG Phone V",120000,10);
    ROG.printinfo();
    Zenbook Zenfone("VivoBook K15 OLDE",56000,2);
    Zenfone.printinfo();
    Zenfone.getname();
    VivoBook Vivo("S14 4K M34X98L56",89999,5);
    Vivo.printinfo();
    return 0;
}