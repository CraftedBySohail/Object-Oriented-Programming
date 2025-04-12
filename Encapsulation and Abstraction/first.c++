// implementation of static data member
//A static data member is a variable shared by all objects of a class. It belongs to the class itself, not to any specific object.
// it is a attribute of the class, not of the object.
#include<iostream>

using namespace std;
class Customer{
    public:
    string name;
    int account_number;
    int balance;
    //static data member
    static int total_accounts;


    public:
    Customer(string name , int account_number , int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_accounts++;

    }

    public:
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Total Customer :"<<total_accounts<<endl;
    }
};
// scope resolution operator
int Customer::total_accounts = 0;



int main(){
    Customer c1("sohail" ,1234,1000);
    c1.display();
    Customer c2("john" ,1234,1000);
    c2.display();
    return 0;
}