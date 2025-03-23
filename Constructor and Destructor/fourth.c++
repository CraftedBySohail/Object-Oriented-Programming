// Inline Constructor
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

    public:
    inline Student(string n,int a):name(n),age(a){};

    public:
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student s1("Sohail",21);
    s1.display();
    return 0;
}