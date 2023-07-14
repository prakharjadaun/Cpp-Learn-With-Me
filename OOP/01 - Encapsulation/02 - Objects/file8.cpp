#include<iostream>
using namespace std;

class Laptop
{
    const string brand;
    int &RAM;

    public:
        //constructor with member initialization list
        Laptop(string b,int ram): brand(b),RAM(ram){}

        void printDetails()
        {
            cout<<"Brand: "<<brand<<endl;
            cout<<"RAM: "<<RAM<<endl;
        }
};