//this is by using an extra variable temp.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the a and b : ";cin>>a>>b;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<"your values after swapping are : "<<a<<" and "<<b;
//     return 0;
// }


//now we are solving without using an extra variable .
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a and b : ";cin>>a>>b; //suppose a = 2 and b = 3.
    a = a+b; //here a becomes 5
    b = a-b; //here b becomes 5-3 =2.
    a = a-b; //here a becomes 5-2 =3.
    cout<<"after swapping your values are : "<<a<<" and "<<b;
    return 0;
}