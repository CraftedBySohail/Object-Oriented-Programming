//📌 Task: Overload the == operator to compare if two complex numbers are equal.
#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;

    public:
    Complex(int real,int img){
        this->real = real;
        this->img = img;
    }

    bool operator == (Complex &C){
        if(this->real == C.real && this->img == C.img) return true;
        return false;
    }
};
int main(){
    Complex C1(1,2);
    Complex  C2(2,3);
    if(C1 == C2){
        cout<<"They are equal";

    }
    else{
        cout<<"They are not equal";
    }

    return 0;
}