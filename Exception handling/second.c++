//Demonstration of Try-Catch for Bank Operations in C++

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
        if(amount<=0){
           throw "Deposit should be greater than 0";
        }

        balance = balance + amount;
        cout<<amount<<" Amount is credited succesfully\n";

    }


    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance = balance - amount;
            cout<<amount<<" is debited\n";
        }
        else if(amount<0){
            throw "Amout should be greater than zero";
        }
        else{
           throw "Your balance is low\n";
        }
    }
};
int main(){
    Customer c1("Rohit",5000,10);
   try{
    c1.deposit(100);
    c1.withdraw(6000);
   }
   catch(const char *e){
    cout<<"Exception occured: "<<e<<endl;

   }
    return 0;
}