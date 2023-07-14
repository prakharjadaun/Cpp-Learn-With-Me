//Instantiation 

#include<iostream>
using namespace std;

class Student
{
    int numOfBacks;
    int SAP;

    public:
    //reference -> alias -> another name
        void setDetails(int backs,int sap)
        {
            this->numOfBacks = backs;
            this->SAP = sap;

            //what is this? 
        }
        //object's reference -> jo bhi object call kr raha hai is function ko uska reference

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
    stu1.setDetails(2,5000);

    /*
    what if we want to store details for more student?
    let's say 50, will you be creating 50 objects?
    */

    //creating an object to store the details 50 students
    // Student stu[50];


    //what if we want to get the number of students from user at runtime
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    Student *Stu = new Student[n];
    delete[] Stu;

    Student *stu = (Student *)malloc(n*sizeof(Student));
    for(int i=0;i<n;i++)
        free(&stu[i]);
}   