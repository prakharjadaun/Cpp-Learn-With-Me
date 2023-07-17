#include<iostream>
using namespace std;

//we have left the discuss for the protected access level specifier
//do you remember public and private? 


// class Vehicle
// {
//     protected: 
//         int numOfWheels;
//         string name;

//     public:
//         //why constructor always public?
//         //what is private?
//         Vehicle(int nWheels,string n):numOfWheels(nWheels),name(n)
//         {}

// };

// //why do we have used public before vehicle?
// class Bike: public Vehicle
// {
//     float mileage;
//     public:
//         Bike(float m,int nWheels,string n): mileage(m),Vehicle(nWheels,n)            //how do we call the constructor of base class from child class -> using member initialization list
//         {}
        
//         void printDetails()
//         {
//             cout<<"Wheels: "<<numOfWheels<<endl;
//             cout<<"Name: "<<name<<endl;
//             cout<<"Mileage: "<<mileage<<endl;
//         }
// };

// int main()
// {
//     Vehicle obj(4,"CAR");
//     // cout<<obj.numOfWheels<<endl;

//     Bike obj1(50,2,"Hero");
//     obj1.printDetails();
// }




class Parent
{
    private:  //default access levels
        int var2=3;
    protected: 
    
    public:
        int fun2(int x)
        {
            return var2 *x;
        }
};


class child: private Parent       // -> aage na inheritance ho skti & data hiding
{
    private:
        //public and protected members
    protected:
        
    public:   
        // int var2=5;

        // int fun2(int x)
        // {
        //     return var2 * x;
        // } 
};

int main()
{
    child obj;
    // cout<<obj.fun2(1)<<endl;

}

/*
There are 3 modes of inheritance according to access levels: private, protected and public

    - Public Mode: 
        If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

    - Protected Mode: 
        If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

    - Private Mode: 
        If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
*/