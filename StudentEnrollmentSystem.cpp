#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
class Students{
    public:
    int roll;
    string name;
    int age;
    //now we are creating a default constructor.
    Students(){}
    Students(string n,int r,int a){
        name = n;
        roll = r;
        age = a;
    }
    void display(){
        cout<<"Name of Student is : "<<name<<endl;
        cout<<"Roll No. of the Student is : "<<roll<<endl;
        cout<<"Age of the student is : "<<age<<endl;
        cout<<"------------------------------------------------------------------------------------------"<<endl;
    }
};
int main(){
    int no;
    cout<<"Enter the number of students : ";
    cin>>no;
    vector<Students> v(no);
    for(int i=0 ; i<no ; i++){
        cout<<"enter the name of the "<<i+1<<" student : ";getline(cin,v[i].name);
        cout<<"enter the roll no. of the "<<i+1<<" student : ";cin>>v[i].roll;
        cout<<"enter the age of the "<<i+1<<" student : ";cin>>v[i].age;
    }
    cout<<"Thank You for providing me the Information."<<endl;
    for(int i=0 ; i<no ; i++){
        v[i].display();
    }
    return 0;
}