/*
Objective: To understand the usage of containership with an example
*/
#include<iostream>
using namespace std;

class Carburettor
{
    private:
        char type;
        float cost;
        string mfr;
    public:
        void setcarbData(char t, float c, string m)
        {
            type = t;
            cost = c;
            mfr = m;
        }

        void display()
        {
            cout<<type<<endl;
            cout<<cost<<endl;
            cout<<mfr<<endl;
        }

};

class Car
{
    private:
        string model;
        string drivetype;
        Carburettor cb;
    public:
        void setData(char t, float c, string m, string mod, string dt)
        {
            model = mod;
            drivetype = dt;
            cb.setcarbData(t,c,m);
        }

        void display()
        {
            cout<<model<<endl;
            cout<<drivetype<<endl;
            // we can print the data members of carburettor class using its display function
            cb.display();
            //but if you wish to access the data member individually then you cannot (using the approach of containership)
            //how will you resolve this issue?: either define the private members as public but it will just remove the meaning of abstraction from our implementation
            //another approach would be using friend keyword
            
        }
};