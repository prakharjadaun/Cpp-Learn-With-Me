#include<iostream>
#include<fstream>       
#include<cstring>
using namespace std;
//reading from a file using seekg()
int main()
{
    char ch;
    //creating an object of ifstream object
    ifstream in("Data.txt");                   //open file for reading

    if(!in)
    {
        //if file is not found or opened
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    char str[20];

    //using seekg to read a file
    in.seekg(10,ios::beg);
    in.seekg(-5,ios::cur);     //setting the position
    //modes:
    //1. ios::beg
    //2. ios::cur
    //3. ios::end      

    while(in.get(ch))
    {
        cout<<ch;
    }
    
    //closing the object
    in.close();
    return 0;
}

/*
seekg() is a function in the iostream library that allows us to seek an arbitrary position in a file. It is mainly used to set the position of the next character to be extracted from the input stream from a given file in C++ file handling.
*/