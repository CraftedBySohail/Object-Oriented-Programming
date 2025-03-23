// size of an object
#include<iostream>
using namespace std;
class Student {
    public:
    int a;
    int b;
    int c;
   

};
int main(){
    Student s1;
    cout<<sizeof(s1);
    return 0;
}