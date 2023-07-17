#include<iostream>
using namespace std;

//intro to operator overloading

class Compute
{
    int real,imaginary;
    public:
        void get()
        {
            cout<<"Enter the real and the imaginary part: "<<endl;
            cin>>real>>imaginary;
        }

        void print()
        {
            cout<<"Complex number: "<<real<<" + "<<imaginary<<"j"<<endl;
        }

        //syntax: operator __ (operator)
        Compute operator +(Compute c2)
        {
            Compute c3;
            c3.real = real + c2.real;
            c3.imaginary = imaginary + c2.imaginary;
            return c3;
        }
};

int main()
{
    Compute c1,c2,c3;
    c1.get();
    c1.print();

    c2.get();
    c2.print();

    //can we add these two complex number? 
    //c1 + c2 

    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.print();
}