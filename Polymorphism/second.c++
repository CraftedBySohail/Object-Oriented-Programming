// operator overloading
// operator as function

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
    // default constructor
    Complex(){
        
    }

    Complex operator +(Complex &C){
        Complex ans; // default constructor is not present for this
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }

    void display(){
        cout<<real<<"+i"<<img<<endl;
    }

};
int main(){
    Complex C1(1,2);
    C1.display();
    Complex C2(2,3);
    C2.display();

    Complex C3 = C1 + C2;
    // C1 has called the function and the C2 is passed as argument
    C3.display();
        return 0;
}