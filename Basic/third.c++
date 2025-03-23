// using getter function
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

    // getter function

    void getname(){
        cout<<name<<endl;
    }

    void getRollno(){
        cout<<Rollno<<endl;
    }

    void getage(){
        cout<<age<<endl;
    }
};


int main(){
    Student s1;
    s1.setname("Sohail");
    s1.setage(4);
    s1.setRollno(5);

    Student s2;
    s2.setname("Rahul");
    s2.setage(5);
    s2.setRollno(8);

    


    // calling setter function
    s1.getname();
    s1.getage();
    s1.getRollno();

    s2.getname();
    s2.getage();
    s2.getRollno();


    return 0;
}