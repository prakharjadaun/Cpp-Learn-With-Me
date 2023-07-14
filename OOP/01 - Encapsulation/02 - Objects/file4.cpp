#include<iostream>
using namespace std;

class Student
{
    const int sapId;
    int r;
    public:
        //only for constructors -> member initialization list
        //member initialization list -> useful to assign the default values to the class variables & to const data members especially.
        //directly access through compiler
        Student(int sap): sapId(sap)
        {}

        Student(int sap,int roll):sapId(sap),r(roll)
        {}

    /*
    this function cannot be used because sapId is constant value now
    void updateSAP(int sapNew)
    {
        sapId = sapNew;
    }
    */

    //function to print sap
    void printSap()
    {
        cout<<"SAP ID: "<<sapId<<endl;
    }
};


int main()
{
    Student obj(5000,1234);
    obj.printSap();     
    
}