#include<iostream>
#include<fstream>       
using namespace std;
//writing into a file using seekp()
int main()
{
    //creating an object of ofstream object
    fstream output("Data.txt",ios::trunc);                           //open file for output(writing)
    //modes of writing and reading
    //append -> ios::app
    //reading -> ios::in
    //writing -> ios::output
    //ios::trunc


    if(!output)
    {
        //if file is not found or created
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    // output.seekp(0,ios::beg);
    // auto temp = output.tellp();
    // cout<<temp<<endl;
    //writing into the file with the ofstream object
    // output<<"Virat Kohli"<<endl;


    //closing the object
    output.close();
    return 0;
}


/*
The seekp(pos) method of ostream in C++ is used to set the position of the pointer in the output sequence with the specified position.
*/