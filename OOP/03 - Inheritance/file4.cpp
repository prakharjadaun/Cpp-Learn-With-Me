//multilevel inheritance
#include<iostream>
using namespace std;
class GrandParent
{
    public:
        void func()
        {
            cout<<"hello world"<<endl;
        }

        //overloaded functions ek hi class mein hone chahiye        
};

class Parent : GrandParent
{
    public:
        //overriding: rewriting 
        void func()
        {
            cout<<"Namaste"<<endl;
        }
};

class Child : Parent
{
    public:
        void print()
        {
            func();
        }
};




/*
Applications:
    Grandparent     
        | 
      Parent
        | 
      Child


    Family hierarchy (as above)
*/