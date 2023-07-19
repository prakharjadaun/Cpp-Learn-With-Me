#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    int a;
    int b;
    try
    {
        cin>>a>>b;
        if(b == 0)
            throw b;      //int type
        
        cout<<a/b<<endl;
    }
    catch(int b)     //catches the integer type exception
    {
        cout<<"Exception occured"<<endl;
    }

    //try should always be followed by catch
    //catch should always be preced by the try block
    //no finally keyword exists in cpp
}


/*
There are two types of exceptions: 
a) Synchronous, 
b) Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.). (errors)
*/

//why do we use exceptions 

/*
C++ provides the following specialized keywords for this purpose:
- try: Represents a block of code that can throw an exception.
- catch: Represents a block of code that is executed when a particular exception is thrown.
- throw : Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.
*/