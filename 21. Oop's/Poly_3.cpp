#include<bits/stdc++.h>
using namespace std;
// Function Overwriting
class base{
    public:
        virtual void print(){
            cout<<"This is the base class's print Function"<<endl;
        }
        void display(){
            cout<<"This is the base class's display Function"<<endl;
        }
};
class derived : public base{
    public:
        void print(){
            cout<<"This is the derived class's print Function"<<endl;
        }
        void display(){
            cout<<"This is the dervid class's display Function"<<endl;
        }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();     // not used dot oprator
    baseptr -> display();
    return 0;
}