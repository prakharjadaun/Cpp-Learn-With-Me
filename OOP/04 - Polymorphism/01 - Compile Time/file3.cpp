#include<iostream>
using namespace std;

class UPES
{   
    string name;
    int SAPId;

    public:
        //constructor overloading

        UPES()
        {}

        UPES(string n = ""):name(n)
        {}

        UPES(string n = "",int sap=-1):name(n),SAPId(sap)
        {}

};