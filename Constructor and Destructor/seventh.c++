// Destuctor 
// It is the last function that is called when an object is destroyed.
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1("Sohail");
    Student s2("Shantanu");

    cout << "Inside main function\n";

    return 0; // Objects go out of scope here, so destructors are called
}
