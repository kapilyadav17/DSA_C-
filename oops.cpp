#include<iostream>
using namespace std;

class student { //here we declared a class named student.
public:   //it makes the following members publicaly accessible.
    string name; //these are the data members of the class.
    int age;
    char gender;

    // Default constructor
    student() {
        cout << "Default constructor." << endl;
    }

    // Parameterized constructor
    student(string s, int a, char g) { //in this it initializes object with the given values.
        name = s;
        age = a;
        gender = g;
    }

    // Copy constructor
    student(student &a) { //A copy constructor is a special type of constructor used to create a new object as a copy of an existing object.
        cout << "Copy constructor." << endl;
        name = a.name;  //This copies the name attribute from the a object to the current object.
        age = a.age;   //This copies the age attribute from the a object to the current object.
        gender = a.gender;  //This copies the gender attribute from the a object to the current object.
    }

    // Setter function for name
    void setname(string s) {
        name = s;
    }

    // Getter function for name
    void getname() {
        cout << name << endl;
    }

    // Function to print student info
    void printinfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    // Single student entry
    student a;
    cout << "Enter the name of student a: "; cin >> a.name;
    cout << "Enter the age of student a: "; cin >> a.age;
    cout << "Enter the gender of student a (M/F): "; cin >> a.gender;
    cout << "We have stored the data for student A:" << endl;
    a.printinfo();

    // Array of students
    student arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter the name of student " << i + 1 << ": "; cin >> arr[i].name;
        cout << "Enter the age of student " << i + 1 << ": "; cin >> arr[i].age;
        cout << "Enter the gender of student " << i + 1 << " (M/F): "; cin >> arr[i].gender;
    }
    
    cout << "The data of the students is:" << endl;
    for (int i = 0; i < 3; i++) {
        arr[i].printinfo();
    }

    // Demonstrating parameterized constructor
    student b("Jack", 20, 'M');
    b.printinfo();

    // Demonstrating copy constructor
    student c = b;
    c.printinfo();

    return 0;
}
