#include<iostream>
using namespace std;

class Compute
{
    public:
        //polymorphism: many forms
        //example of function overloading

        //add function with two __________
        int add(int a,int b)
        {
            return a+b;
        }

        int add(int a,int b,int c)
        {
            return a+b+c;
        }

        float add(float a,float b)
        {
            return a+b;
        }

    /*
    Function overloading
    - It is a feature of OOP.
    - In this, two or more functions can have the same name but different parameters.
    - If number of parameters are same, then their data type should be different.
    - should be in the same class (if we are talking about class definition)
    */
    
};

int main()
{
    Compute obj;
    cout<<obj.add(1,2)<<endl;
    cout<<obj.add(1,2,3)<<endl;
}