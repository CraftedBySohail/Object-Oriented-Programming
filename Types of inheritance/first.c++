// implementation of single level inheritance
#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;


    public:
    void work(){
        cout<<"Work is done";
    }
};


class Student : public Human{
    int roll_no , fees;

    public:
    Student(string name ,int age , int roll_no , int fees){
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }
};

int main(){
    Student a1("Sohail",26,32,99);
    a1.work();
    return 0;
}