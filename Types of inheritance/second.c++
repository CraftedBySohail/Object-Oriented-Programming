// implementation of multilevel inheritance
#include<iostream>
using namespace std;
class Humans{
  protected:
  string name;
  
  public:
  void introduce(){
    cout<<"My  name is Sohail Khan"<<endl;
  }
};


class Employee : public Humans{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthly salary is :"<<salary<<endl;
    }

};

class Manager : public Employee{
    public:
    string department;

    Manager(string name,int salary,string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    };
};
int main(){
    Manager a1("sohail",1000,"science");
    a1.monthly_salary();
    a1.introduce();
    return 0;
}