#include<iostream>
using namespace std;

//base class
class Base
{
    public: 
        void display()
        {
            cout<<"Inside Base class display function"<<endl;
        }
};


//child class
//single level inheritance
class Child: public Base
{
    public:
        //overriden function of parent class
        void display()
        {
            cout<<"Inside child class display function"<<endl;
        }
};

int main()
{
    //we declared a pointer of Base class
    Base *ptr;
    //Created one object of base class and one of child class
    Base b;
    Child c;

    //base class pointer is now pointing the object of its derived class
    //it is legal 
    //According to type compatibility, a pointer of a class can hold the address of its class or one of its derived class
    //this is known as upcasting

    //we then call both the display function one with child class add. and one with base class
    ptr = &c;
    ptr->display();
    ptr = &b;
    ptr->display();


    //but output is same? why?
    //because the compiler ignore the content of ptr and chooses the membver function that matches the type of the pointer. Here, since ptr's type matches the base class and hence the base class display gets called.

    //but we can avoid this functionality of compiler and make him focus on the content of the pointer
    return 0;
}