// implementation of derived class
// when the derived class is protected class

#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age,weight;
};

class Student :protected human{
    // private:
    int roll_no;

    // protected:
    // string name;
    // int age,weight;
};
int main(){
    Student a1;
    a1.name = "sohail";
    a1.roll_no = 32;
    return 0;

}
