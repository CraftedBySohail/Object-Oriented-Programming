// when the derived class is a private class
// will give error
#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age;
};

// derived class
class Student : private human{
    // private:
    int roll_no;
};

int main(){
    Student s1;
    s1.name("Sohail");
    return 0;

}