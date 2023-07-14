#include<iostream>
using namespace std;

class Student
{
    //what about in the case of reference variable
    // int &sapId;
    int sapId;
    public:
        
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