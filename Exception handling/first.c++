// way of handling exception
#include<iostream>
using namespace std;
class Customer{
    string name;
    int balance,account_number;

    public:
    Customer(string name , int balance,int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;

    };

    void deposit(int amount){
        if(amount>0){
            balance = balance + amount;
            cout<<amount<<" Amount is credited succesfully\n";
        }



    }


    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance = balance - amount;
            cout<<amount<<" is debited\n";
        }
        else if(amount<0){
            cout<<"Amout should be greater than zero"<<endl;
        }
        else{
            cout<<"Your balance is low\n";
        }
    }
};
int main(){
    Customer c1("Rohit",5000,10);
    c1.deposit(100);
    c1.withdraw(6000);
    return 0;
}