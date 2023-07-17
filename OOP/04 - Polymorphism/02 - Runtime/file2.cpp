#include<iostream>
using namespace std;

//base class
class Compute
{
    public:
        void divide(int a,int b)
        {
            cout<<"Quotient: "<< a/b<<endl;
        }
};

//child class
class Division: public Compute
{
    public:

        /*
        - When child class contain a function with same name and same number of parameters(even the type should  be same)
        - There should be new functionality too in the overriden function, otherwise there is no use to rewrite the same function in the child class. (As we have to achieve code resuability)
        */

        //overriden function -> to add a new functionality to an existing function
        void divide(int a,int b)
        {
            cout<<"Remainder: "<<a%b<<endl;
            cout<<"Quotient: "<< a/b<<endl;
        }
};

/*
Q: Why do this concept comes under Runtime Polymorphism
    - To implement function overriding, we must have two or more classes.
    - It strictly depends on the instance/object of class to call the function.
    - If the base class object is created then its divide will be called and if child class object is created then it's divide (overriden function) will be caled. 
*/