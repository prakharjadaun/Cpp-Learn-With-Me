#include<iostream>             // cout and cin
#include<fstream>              // fstream class
using namespace std;
//writing into a file


// ofstream : for writing into the file
// ifstream : for reading from the file


// classname objectname;
// classname objectname("valuepass");

int main()
{
    //creating an object of ofstream object
    fstream out("Data.txt",ios::out);                     //open file for output(writing)

    //if you are writing, agar file exist krti hai to wo humara object usko point krega 
    //agar exist nahi krti to humari ek nayi file create ho jayegi, usi name se

    if(!out) //FALSE
    {
        //if file is not found or created
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    //writing into the file with the ofstream object
    out<<"Prakhar Jadaun"<<endl;                    // endl -> newline character + buffer empty kr raha hai
    out<<"Ramesh Kumar"<<endl;
    out<<"Suresh Kumar"<<endl;

    //closing the object
    out.close();
    return 0;
}