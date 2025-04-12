// function overloading
#include<iostream>
using namespace std;
class Area{
    public:
    int calculateArea(int r){
        // area of circle
        return 3.14*r*r;    
    }

    int calculateArea(int l,int b){
        // area of rectangle
        return l*b;
    }
};

int main(){
    Area a1;
    cout<<a1.calculateArea(4,5)<<endl;
    cout<<a1.calculateArea(4);
    return 0;
}