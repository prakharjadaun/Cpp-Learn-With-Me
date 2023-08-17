#include<iostream>
using namespace std;

class Base
{
    public:
        //when i define, my base class function to be virtual, then notice the output
        virtual void display()
        {
            cout<<"Inside base class function"<<endl;
        }
};

class Child1: public Base
{
    public:
        void display()
        {
            cout<<"Inside the child 1 class function"<<endl;
        }
};

class Child2: public Base
{
    public: 
        void display()
        {
            cout<<"Inside the child 2 class function"<<endl;
        }
};

int main()
{
    Base *b;
    Child1 c1;
    Child2 c2;

    //we can change the output using a keyword call virtual.
    b = &c1;
    //when i call this function now, then compiler focuses on the contents of pointer and call the member function whose class address is been stored
    b->display();
    b = &c2;
    b->display();

    //How does the compiler know which function to be called?
    //At runtime, when it is known what object is pointed to by ptr, the appropriate version of display() gets called. This is called late binding or dynamic binding
    //Late binding requires some overhead but provides increased power and flexibility.
    return 0;
}