//hybrid inheritance (dreaded diamond problem)
#include<iostream>
using namespace std;

class GrandParent
{
    public:

};

class Parent1: GrandParent
{
    public:
        void func()
        {
            cout<<"Hello world"<<endl;
        }

};

class Parent2: GrandParent
{
    public: 
        void func()
        {
            cout<<"Namaste"<<endl;
        }

};

class child: Parent1,Parent2
{   
    public:
        void print()
        {
            // func();
        }
};

//HW: diamond problem?

/*
The Diamond Problem is an ambiguity that arises in multiple inheritance when two parent classes inherit from the same grandparent class, and both parent classes are inherited by a single child class
*/

//why does dreaded diamond problem occur in hybrid inheritance? (multiple)
//

//Refer example image