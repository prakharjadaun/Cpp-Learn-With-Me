#include<iostream>
using namespace std;

//intro to operator overloading
//user defined data type
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

// 3 + 2j

int main()
{
    Compute c1;
    c1.get();
    c1.print();
}