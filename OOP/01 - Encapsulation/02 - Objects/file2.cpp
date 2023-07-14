#include<iostream>
using namespace std;

class Student
{
    int sapId;
    public:
    //constructor
        Student(int sap)
        {
            sapId = sap;
        }

    void updateSAP(int sapNew)
    {
        sapId = sapNew;
    }

    //function to print sap
    void printSap()
    {
        cout<<"SAP ID: "<<sapId<<endl;
    }
};


int main()
{
    Student obj(5000);
    obj.printSap();     //what is the output?
    obj.updateSAP(50001);
    obj.printSap();     //what is the output?

    //But will you ever want to change the SAP ID of a student? No, right?
}