#include<iostream>
using namespace std;

class Home
{
    public:
    //data members
    int rooms;
    int floors;


    Home()
    {

    }

    //member functions
    void printDetails()
    {
        cout<<"rooms: "<<rooms<<endl;
        cout<<"Floors: "<<floors<<endl;
    }

};   //java mein semicolon nahi lgta

//blueprint 


int main()
{
    //builder ko 
    Home h1,h2,h3; 

    h1.floors = 2;
    h1.rooms = 2;

    h2.floors = 3;
    h2.rooms = 3;

    h3.floors = 4;
    h3.rooms = 4;

    h1.printDetails();
    h2.printDetails();
    h3.printDetails();
}

//1. in class we can write functions