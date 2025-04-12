// implementation of multiple inheritance
#include<iostream>
using namespace std;
class Engineer{
    public:
    string specilization;
    void work(){
        cout<<"I have specialization"<<endl;
    }

};

class Youtuber{
    public:
    int subscriber;

    void contentCreator(){
        cout<<"I have a subscriber"<<subscriber<<endl;
    }
};


class CodeTeacher: public Engineer, public Youtuber{
    public:
    string name;
    CodeTeacher(string name,string specilization,int subscriber){
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber; 
    }

    void showCase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentCreator();
    }

};

int main(){
    CodeTeacher a1("rohit","cse",4900);
    a1.showCase();
    return 0;
}

