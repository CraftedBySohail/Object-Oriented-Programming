// // Encapsulation
// Definition:
// Encapsulation means putting data and related functions together 
//inside a class and protecting that data from being accessed or changed directly
// from outside.
#include<iostream>
using namespace std;
class Customer{
  private:
    string name;
    int age;
    int amount;

    public:
    Customer(string name,int age,int amount){
        this->name = name;
        this->age = age;
        this->amount = amount;
    }
    

    public:
    void setage(int age){
        if(age>0){
            this->age = age;
        }
        else{
            cout<<"Invalid age"<<endl;
        }
    }

    public:
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Amount : "<<amount<<endl;
    }
};
int main(){
    Customer a1("john",20,1000);
    a1.setage(-2);
    a1.display();
    Customer a2("Sohail",10,2000);
    Customer a3("denver",90,2000);
    return 0;
}
