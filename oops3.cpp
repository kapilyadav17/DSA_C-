#include<iostream>
#include<vector>
using namespace std;
class Students{
    public:
    string name;
    int roll;
    float percent;

   Students(){
    cout<<"this is default constructor(IGNORE THIS LINE)"<<endl;
   }


    Students(string n ,int r, float p){  //it is the paramterised constructor , we need to pass parameteres to this to print output.
        name = n;
        roll = r;
        percent = p;
    }


    void Studfunc(){
        cout<<"this is a function used to store the students in the class."<<endl;
    }
    void printinfo(){
        cout<<"My name is : "<<name<<endl;
        cout<<"My Roll NUmber is : "<<roll<<endl;
        cout<<"My Percentage is : "<<percent<<endl;
    }
};
class Couples{
    string name;
    float percent;
};
class Friends{
    string name;
    float num;
};
int main(){
 cout<<"we are taking input for the male students : "<<endl;
 int no;
 cout<<"Enter the number of male students : ";cin>>no;
  vector<Students> Male(no);
 for(int i=0 ; i<no ; i++){
    cout<<"Enter the name of the "<<i+1<<" male student : ";cin>>Male[i].name;
    cout<<"Enter the roll no. of the "<<i+1<<" male student : ";cin>>Male[i].roll;
    cout<<"Enter the percentage of the "<<i+1<<" male student : ";cin>>Male[i].percent;
 }
 cout<<"Thank You for Submitting the Info."<<endl;
 for(int i=0 ; i<no ; i++){
     Male[i].printinfo();
 }
 int fno;
 cout<<"Please Submit the Input of the Female Students , enter the number of the female students : ";cin>>fno;
 vector<Students> Female(fno);
 for(int i=0 ; i<fno ; i++){
    cout<<"enter the name of the "<<i+1<<" female student : ";cin>>Female[i].name;
    cout<<"Enter the roll no. of the "<<i+1<<" female student : ";cin>>Female[i].roll;
    cout<<"Enter the percentage of the "<<i+1<<" female student : ";cin>>Female[i].percent;
 }
 cout<<"now we are printing the data of the female students : "<<endl;
for(int i=0 ; i<fno ; i++){
    Female[i].printinfo();
}
 
 }