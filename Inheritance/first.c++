// implementation of inheritance
#include<iostream>
using namespace std;
class human{
    public:
    int a;
    private:
    int b;
    protected:
    int c;

    public:
    void fun(){
        this->a = 10;
        this->b = 20;
        this->c = 30;
    }

    void display(){
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
        cout<<"c : "<<c<<endl;
    }
};
int main(){
    human h1;
    h1.fun();
    h1.display();
    return 0;
}