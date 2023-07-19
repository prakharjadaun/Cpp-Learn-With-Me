#include<iostream>
using namespace std;


void myFunc(int i)
{
    cout<<"Inside the myfunc function() : "<<i<<endl;
    if(i==0)
        throw i;        //an exception is been thrown if i==0
}

int main()
{
    try
    {
        cout<<"Inside the try block"<<endl;
        //calling myFunc()
        myFunc(98);
        myFunc(7);
        myFunc(0);
        myFunc(73);
    }
    catch(...)     //to handle all type of exceptions
    {
        // ...  ellipsis
        cout<<"Exception occured"<<endl;
    }

    cout<<"Outside the try-catch block"<<endl;
    return 0;
}

// but what if we throw an exception from a function for which we have not specified the catch block
