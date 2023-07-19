#include<iostream>
using namespace std;
//basic use of try, throw and catch statement

int main()
{
    cout<<"1"<<endl;

    try
    {
        //start of the try block
        cout<<"2"<<endl;
        throw 'a';

        cout<<"3"<<endl;
    }
    catch(char e)
    {
        //inside the catch block
        cout<<"4"<<endl;
        cout<<"5"<<e<<endl;
    }

    cout<<"6"<<endl;
    
    return 0;
}

