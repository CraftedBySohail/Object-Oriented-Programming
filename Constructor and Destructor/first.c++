// Default Constructor
// C++ program to demonstrate default constructor
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int roll_no;



    // Default constructor
    public:
    Student(){
        cout<<"Default constructor is called"<<endl;
    }
};
int main(){
    Student s1;
    return 0;
}