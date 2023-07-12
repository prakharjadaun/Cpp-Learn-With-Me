//Instantiation 

#include<iostream>
using namespace std;

class Student
{
    int numOfBacks;
    int SAP;

    public:
        void setDetails(int backs,int sap)
        {
            this->numOfBacks = backs;
            this->SAP = sap;


            //what is this? 
        }

        void getDetails()
        {
            cout<<numOfBacks<<endl;
            cout<<SAP<<endl;
        }

};

int main()
{
    //we have created an object of class
    Student stu1;

    /*
    what if we want to store details for more student?
    let's say 50, will you be creating 50 objects?
    */

    //creating an object to store the details 50 students
    Student stu[50];


    //what if we want to get the number of students from user
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    Student *Stu = new Student[n];

}   