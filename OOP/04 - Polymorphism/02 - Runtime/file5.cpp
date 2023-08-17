//pure virtual function
#include<iostream>
using namespace std;

class Base
{
    public:
        /*
            -> display function as a pure virtual function
            -> pure virtual function: a function with no body, and a '=0' in its declaration
            -> the value 0 is not assigned to anything it is used to simply tell the compiler that a function will be pure, i.e. it will not have a body
        */
        virtual void display()=0;

        /*
            -> If we try to call the pure virtual function, then it will be invalid
            -> At times, we have to restrict that there should be no object created of certain class. For cases like these, we can define a pure virtual function inside the class.
            -> A class from which we would never want to create objects is called an abstract class.
            -> Using this way, when you create an object of a class having pure virtual function, not only will compiler complain that you are trying to create an object of the abstract class, it will also tell you the name of the virtual function that makes the base class an abstract class

            -> When a pure virtual function is placed in the base class, you must override it in all the derived class from which you wish to create objects. (if you don;t do this in a derived class then the derived class becomes an abstract class)
        */

};
//In C language, there is only one kind of binding that is static binding (no late or dynamic binding)