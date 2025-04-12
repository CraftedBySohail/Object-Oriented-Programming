// implementation of static data member

#include<iostream>
using namespace std;

class Student{
    public:
    static int count;

    public:
    Student(){
        count++;
    }

    void display(){
        cout<<"Count of students: "<<count<<endl;
    }
};
int Student :: count = 0;
int main(){
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    Student s3;
    s3.display();

    // s1.display();
    // s2.display();
    // s3.display();
    return 0;
}