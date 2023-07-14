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
            cout<<"constructor"<<m<<endl;
            nWheels = nwheel;
            model = m;
        }

        //A Destructor: destroys the object (cleans up the storage)
        //member function whose name is the same as that of the class but is preceded by tilde(~)
        ~Bike()   //you should never pass any parameter
        {
            cout<<model<<endl;
            cout<<"This is a destructor"<<endl;
        }

        //constructor call-> object jab banate hain tab
        //destructor call -> object jab destroy krna ho 


        /*
        POINTS:
            - Destructor performs these operations:
              - closing a file
              - deallocating and releasing the memory
              - destructor can be called explicitly may be for destroying the object's memory before the scope ends
        */
};


// *p directly memory 2000
// free()

//https://www.geeksforgeeks.org/is-it-possible-to-call-constructor-and-destructor-explicitly-in-cpp/

int main()
{
    Bike obj(2,"bike");

    cout<<"inside main"<<endl;
    {
        Bike obj2(2,"Bike2");
    }

}

/*
Properties: 
1. Constructors and Destructors have no return type (not even void).
2. A constructor should be defined under public section of a class, so that its object can be created in any function. (If you define constructor in private section, you cannot instantiate an object of that class. we cannot create an object of that class. This is known as SINGLETON DESIGN)

Constructor implicitly define nahi ho jayega aese case mein?
If there is a constructor defined in an private section, then you cannot create an bject in this case also

3. A destructor should be written with tilde(~) symbol with class name.
4. A constructor can take arguments but a destructor cannot.
5. If you do not create a constructor explicitly, then a compiler creates one of its own.
6. If you do not create a destructor explicitly, then a compiler creates one of its own.
*/
