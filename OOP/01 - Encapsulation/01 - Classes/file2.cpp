#include<iostream>
using namespace std;


//creating a class
class Car //class tagname
{

};  //in java we do not have a semicolon, but in cpp we have




/*
Wonder why do we need a class?
    - Remember always, a class is a user defined data type
    - You can store a number in int, float, double and a string in char[] but if I ask you for a data type which can store Bike Details? Do you have a data type?
    - That's when a class comes into picture
*/


class Bike
{
    //variables of a class -> data members
    int numOfWheels;
    string brand;

    //functions of a class -> member functions
    void getData(int noWheels,string b)
    {
        numOfWheels = noWheels;
        brand = b;
    }
};


