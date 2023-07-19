#include<iostream>
#include<fstream>       
using namespace std;
//reading from a file

//ifstream class 

int main()
{
    //creating an object of ifstream object
    ifstream in("Data.txt");                    //open file for output(writing)

    if(!in)   //NULL -> FALSE -> 0 -> '\0'
    {
        //if file is not found or opened
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }
    //char str;
    char str[20];   //char array //multiple characters
    // string str;
    //dynamic
    //sizeof(str) -> 24 bytes
    //sizeof(char) -> 1 byte


    //array -> contiguous -> continuous 
    //char str[10];  //if smaller array and if it results in out of bounds, then exception will be generated
    //char[] -> char *

    //reading from a file
    //EOF 
    while(!in.eof())               //-> EOF : end of file -> NULL -> 0
    {
        //inputs word by word from the file not line by line
        in>>str;
        cout<<sizeof(str)<<endl;
        //char 
        cout<<str<<endl;
    }
    
    //closing the object
    in.close();
    return 0;
}

//return 1 and return 0?
//space ascii : 32


/*
There is no official limit on the size of a string. The software will ask your system for memory and, as long as it gets it, it will be able to add characters to your string. The rest of your question is not clear. The only practical limit on string size in c++ is your available memory.
*/