// // implementation of abstraction
// Abstraction means showing only the important 
//information to the user and hiding the internal details.
// 🔒 Just like you use a phone, but don't know (or need to know) how its internal circuits work.

#include<iostream>
using namespace std;
class Calculator{
    private:
    int a;
    int b;

    public:
    void setValues(int x , int y){
        a = x;
        b = y;

    }

     // Only shows the result, not how it's done inside
    void add(){
        cout<<"Sum : "<<a+b<<endl;
    }

};
int main(){
    Calculator c1;
    c1.setValues(1,2);
    c1.add();

    return 0;
}