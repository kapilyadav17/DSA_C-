#include<iostream>
using namespace std;
class Tata{
    public:
    void Segments(){
        cout<<"Tata Group is Today Active in Automotive Sector , Retail , IT ,Consumer Products etc."<<endl;
    }
};
class TataMotors : public Tata{
    public:
    void Motors(){
        cout<<"Tata Motors has Many Sub Brands like - Tata Motors Cars , Jaguar Land Rover and DAEWOO"<<endl;
    }
};
class Trent : public TataMotors{
    public:
    void Retail(){
        cout<<"Trent is a Retail Company of Tata Group"<<endl;
    }
};
int main(){
    Tata Titan;
    Titan.Segments();
    Trent Sonata;
    Sonata.Retail();
    Sonata.Segments();
    Sonata.Motors();
return 0;
}