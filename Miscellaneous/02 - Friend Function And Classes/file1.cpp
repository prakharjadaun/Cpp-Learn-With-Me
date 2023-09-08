#include<iostream>
using namespace std;

/*

    -> We have learnt that only member functions can access private data of a class.
    -> This is the essence of data encapsulation.
    -> However, sometimes we have to make an exception to this rule to avoid programming incovenience.
    -> At such time we have to allow functions outside a class to access and manipulate the class's data member.
*/

/*
    -> To achieve this C++ provides a keyword called friend.
    -> Let's first see the implemention of friend keyword on function, then we will move to friend classes.
*/

//definning a class Bike
class Bike
{
    private:
        //contains a data member called price
        float price;

    public:
        //assigning the value to the price using the parameterized constructor
        Bike(float f):price(f){}

        //declaring a function called accessPrice as a friend
        friend int accessPrice(Bike);   
};

/*
NOTE: accessPrice is a global friend function but has not been declared as global. This is because when we mention friend in the class it declares the function and also gives it a friend status.
*/
int accessPrice(Bike obj)
{
    return obj.price;
}

int main()
{
    Bike obj(12000);
    cout<<accessPrice(obj);
}

//lets see another usage of friend function between two classes