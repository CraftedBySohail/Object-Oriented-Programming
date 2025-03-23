// Paramerised Constructor
#include<iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    float marks;
public:
//Parameterised constructor

    Student(int r,string n,float m)
   {
        roll = r;
        name = n;
        marks = m;
   }

   public:
   // getter function
   void display(){
        cout<<"Roll No :"<<roll<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
   }
};



int main(){
    Student s1(1,"Sohail",90.0);
    s1.display();
    return 0;
}