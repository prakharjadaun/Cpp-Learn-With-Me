#include<iostream>
using namespace std;

class Laptop
{
    string brand;
    int RAM;

    public:

        Laptop(string b,int ram): brand(b),RAM(ram){}


    /*  This can also work
        Laptop(string b,int ram)
        {
            brand = b;
            RAM = ram;
        }
    */  

    //Q: Was there any need of member initialization list
    //Yes, for assigning a value to const and reference variable inside class constructor

    //Why member initialization list over normal default constructor?
    // ans -> normal default constructor may create two objects while dealing with objects of another user defined data type

};