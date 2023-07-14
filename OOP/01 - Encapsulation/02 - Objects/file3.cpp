#include<iostream>
using namespace std;

class Student
{
    //let's keep the sapId constant
    // const int sapId;
    int sapId;
    public:
    //constructor
        Student(int sap)
        {
            sapId = sap;
        }

    // void updateSAP(int sapNew)
    // {
    //     sapId = sapNew;
    // }

    //function to print sap
    void printSap()
    {
        cout<<"SAP ID: "<<sapId<<endl;
    }
};

//Can you see any difference? 

int main()
{
    Student obj(5000);
    obj.printSap();     //what is the output?
    // obj.updateSAP(50001);
    obj.printSap();     //what is the output?
}