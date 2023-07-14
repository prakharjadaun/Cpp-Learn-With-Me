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
}