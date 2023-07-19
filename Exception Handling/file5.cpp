#include<iostream>
using namespace std;
int main()
{
    cout<<"1"<<endl;

    try 
    {
        cout<<"2"<<endl;
        throw 'a';     //an exception is thrown.
        cout<<"3"<<endl;
    } 
    catch(double e)    //non-matching catch 
    {
        cout<<"4"<<endl;
        cout<<e<<endl;
    }

    cout<<"5"<<endl;

    //what will happen?
    return 0;
}

/*
throwing an unhandled exception causes the standard library function terminate() to be invoked. By default, terminate() calls the abort() to stop your program.
*/