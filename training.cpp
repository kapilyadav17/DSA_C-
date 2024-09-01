#include <iostream>
#include <vector>
#include <sstream> // Needed for stringstream
using namespace std;

class Students {
public:
    int roll;
    string name;
    int age;

    // Default constructor
    Students() {}

    // Parameterized constructor
    Students(string n, int r, int a) {
        name = n;
        roll = r;
        age = a;
    }

    void display() {
        cout << "Name of Student is : " << name << endl;
        cout << "Roll No. of the Student is : " << roll << endl;
        cout << "Age of the student is : " << age << endl;
    }
};

int main() {
    int no;
    cout << "Enter the number of students: ";
    cin >> no;
    cin.ignore(); // Ignore the newline character left in the input buffer

    vector<Students> v(no); // Correctly initialize the vector of Students

    for (int i = 0; i < no; i++) {
        cout << "Enter the name of the " << i + 1 << " student: ";
        getline(cin, v[i].name); // Use getline to read the full name with spaces

        // Input and validation for roll number
        cout << "Enter the roll no. of the " << i + 1 << " student: ";
        string roll_input;
        getline(cin, roll_input); // Read roll number as a string

        stringstream roll_ss(roll_input); // Convert string to stringstream
        if (!(roll_ss >> v[i].roll)) { // Attempt to extract an integer from the stringstream
            cout << "Invalid input. Please enter an integer for roll number." << endl;
            // Handle error if input is not a valid integer
            // You can add additional error handling or retries here
        }

        // Input and validation for age
        cout << "Enter the age of the " << i + 1 << " student: ";
        string age_input;
        getline(cin, age_input); // Read age as a string

        stringstream age_ss(age_input); // Convert string to stringstream
        if (!(age_ss >> v[i].age)) { // Attempt to extract an integer from the stringstream
            cout << "Invalid input. Please enter an integer for age." << endl;
            // Handle error if input is not a valid integer
            // You can add additional error handling or retries here
        }
    }

    cout << "Thank you for providing me the information." << endl;

    for (int i = 0; i < no; i++) {
        v[i].display();
    }

    return 0;
}
