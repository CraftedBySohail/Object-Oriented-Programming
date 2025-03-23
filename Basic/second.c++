// using setter function 
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int Rollno;
    int age;
    char grade;


    // setter function
    public:
    void setname(string n){
        name = n;

    }

    void setRollno(int n){
        Rollno = n;
    }

    void setage(int age1){
        age = age1;
    }
};


int main(){
    Student s1;
    s1.setname("Sohail");
    s1.setage(4);
    s1.setRollno(5);


    return 0;
}