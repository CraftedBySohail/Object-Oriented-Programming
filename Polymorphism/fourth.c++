// virtual function
#include<iostream>
using namespace std;
class Animal{
    public:

   virtual void speak(){
        cout<<"Hu Hu";
    }
};

class Dog : public Animal{
    public:

    void speak(){
        cout<<"bark";
    }
};


int main(){
    Animal *p;
    p = new Dog();
    p -> speak();

    return 0 ;
}