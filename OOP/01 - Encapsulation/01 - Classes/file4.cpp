#include<iostream>
using namespace std;
/*
Q1: types of constructor?
    Three types of constructor:
    a) Default
    b) Parameterized
    c) overloaded constructor
    d) Copy constructor
*/


//default constructor
class UPES
{
    public:
    //class name() {}

        UPES()
        {

        }
};


class Bike
{
    int numofwheels;
    public:
        //default constructor -> with no parameters
        Bike()
        {
            numofwheels = 2;
            cout<<"Hello world"<<endl;
        }

        void upgrade(int w)
        {
            numofwheels = w;
        }
};


//constructor : to assign default values to data members 













//parameterized
class Student
{
    int SAP;
    string name;
    public:
    //we have passed parameters to the constructor 
        Student(int sap, string n)
        {
            SAP = sap;
            name = n;
        }
};





//overloaded constructor
class Stud
{
    int SAP;
    string name;
    int rollno;

    public:
    //polymorphism -> many forms -> overloading

        Stud()
        {   
            cout<<"construct 1"<<endl;
            SAP = -1;
            name = "";
            rollno = -1;
        }

        Stud(string n,int sap)
        {
            cout<<"construct 2"<<endl;

            SAP = sap;
            name = n;
            rollno = -1;
        }

        Stud(int n,string name)
        {
            cout<<"construct 3"<<endl;
            // SAP = sap;
            // rollno = roll;
        }

//uniqueness of signature
//1. different number of parameters
//2. if same num of parameters: then the parameters should be of different types in comparison to other function/constructor
//3. order of parameters matter of data types

};








//copy constructor: to create an instance which is a copy of another instance
class Address
{
    

    public:

    string block;
    int *p=NULL;
    int houseno;

        Address()
        {
            cout<<"Default"<<endl;
        }

        Address(string b,int n)
        {
            cout<<"Parameterized"<<endl;
            block = b;
            houseno =n;
        }


        //copying the contents of another instance into a new instance
        Address(Address &var)
        {
            block = var.block;
            houseno = var.houseno;
        }
};

int main()
{  
    Address prakhar("House1",1);    //2000
    Address sanidhya;


    cout<<prakhar.block<<" "<<prakhar.houseno<<endl;
    cout<<sanidhya.block<<" "<<sanidhya.houseno<<endl;

    sanidhya.block = "Nagar";
    sanidhya.houseno = 2;

    prakhar = sanidhya;

    cout<<prakhar.block<<" "<<prakhar.houseno<<endl;
    cout<<sanidhya.block<<" "<<sanidhya.houseno<<endl;
}