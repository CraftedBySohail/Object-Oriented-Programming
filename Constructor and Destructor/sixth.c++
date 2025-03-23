// default Copy Constructor

#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;


    // Construtor
    public:
    Student(int age){
        name = "Sohail";
        this->age = age;
    }

    public:
    Student(string name , int age){
        this->name = name;
        this->age = age;

    }

    // Explicitly Copy Constructor
    Student(Student &s){
        name = s.name;
        age = s.age;
        cout<<"Copy Constructor is called"<<endl;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student s1("Shantanu",20);
    Student s2(s1);

    s1.display();
    s2.display();
    return 0;
} 