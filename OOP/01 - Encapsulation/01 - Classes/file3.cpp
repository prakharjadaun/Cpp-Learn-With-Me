//Constructor and destructors

#include<iostream>
using namespace std;

/*
Q1: constructor?
    - A special method which is invoked when we want to allocate a memory for a object
    - Has Same name as that of the class
*/

class UPES
{
    public:
    //this is a constructor (member function)
    //explicitly defined constructor
        UPES()    //do no have a return type not even void
        {

        }
};


/*
Q2: Need of constructor?
    A constructor is needed by the compiler to get the blueprint or structure of the class and allocate the memory required by the class

Q3: If we do not create a constructor then?
    The compiler creates a constructor of class by itself. (same as above, the compiler just has to get the name of the class)
*/


int main()
{
    //when we create a object, constructor is called implicitly
    UPES obj;

    /*
    explicitly - manually
    implicit - automatically
    Know the meaning of explicit and implicit? : Example of a led bulb (non-automatic and automatic)
    */

}