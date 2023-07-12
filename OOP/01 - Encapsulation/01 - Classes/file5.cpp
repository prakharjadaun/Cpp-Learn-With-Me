#include<iostream>
using namespace std;

class Bike     //always keep your class name starting with capital character (good practice)
{
    int nWheels;
    string model;
    public:

        // A parameterized constructor
        Bike(int nwheel,string m)
        {
            nWheels = nwheel;
            model = m;
        }

        //A Destructor: destroys the object (cleans up the storage)
        //member function whose name is the same as that of the class but is preceded by tilde(~)
        ~Bike()
        {
            cout<<"This is a destructor"<<endl;
        }


        /*
        POINTS:
            - Destructor performs these operations:
              - closing a file
              - deallocating and releasing the memory
        */

};


/*

Properties: 
1. Constructors and Destructors have no return type (not even void).
2. A constructor should be defined under public section of a class, so that its object can be created in any function. (If you define constructor in private section, you cannot instantiate an object of that class. we cannot create an object of that class. This is known as SINGLETON DESIGN)
3. A destructor should be written with tilde(~) symbol with class name.
4. A constructor can take arguments but a destructor cannot
5. If you do not create a constructor explicitly, then a compiler creates one of its own.
*/
