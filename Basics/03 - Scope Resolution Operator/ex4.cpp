//In case of multiple inheritance

#include<iostream>
using namespace std;

class A
{
    protected:
        int ex;
    public:
        A()
        {
            ex = 10;
        }
};

class B
{
    protected: 
        int ex;
    public: 
        B()
        {
            ex = 0;
        }
};

class C: public A, public B
{
    public:
    //how to access x of both 
        void func()
        {
            cout<<A::ex<<endl;
            cout<<B::ex<<endl;
        }
};