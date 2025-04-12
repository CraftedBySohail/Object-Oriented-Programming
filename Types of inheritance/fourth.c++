// implementation of heirarchical inheritance
#include<iostream>
using namespace std;
//parent class
class human{
    protected:
    string name;

    public:
    void showcase(){
        cout<<"This is a parent class"<<endl;
    }
};

class Teacher: public human{
    public:
    int salary;

    Teacher(string name , int salary){
        this->name = name;
        this->salary = salary;
        showcase();

    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"salary : "<<salary<<endl;
    }

};
class Student: public human{
    public:
    int roll_no;

    Student(string name , int roll_no){
        this->name = name;
        this->roll_no = roll_no;
        showcase();

    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"roll_no : "<<roll_no<<endl;
    }
};


int main(){
    Student s1("Sohail",32);
    s1.display();
    Teacher s2("rahul",45);
    s2.display();
    
    return 0;
}