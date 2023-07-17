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
};

int main()
{
    Compute c1,c2;
    c1.get();
    c1.print();

    c2.get();
    c2.print();

    //can we add these two complex number? 
    //c1 + c2 

    //operator overloading -> java do not support operator overloading
}