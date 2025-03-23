#include<iostream>
using namespace std;
 class Student {
    public: //access modifier
    string name;
    int age;
    char grade;
};
int main(){
    Student s1;
    s1.name = "Sohail Khan";
    s1.age = 25;
    s1.grade = 'A';

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.grade;


    return 0;
}