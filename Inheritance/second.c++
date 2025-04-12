// implementation of derived class
// when the derived class is public class

#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age,weight;
};

class Student : public human{
    public:
    int roll_no, age;
};
int main(){
    Student a1;
    a1.name = "sohail";
    a1.roll_no = 32;
    return 0;

}
