//To access global variables 
#include<iostream>
using namespace std;

//a global variable
int x = 10;

int main()
{
    //a local variable
    int x = 0;

    cout<<"Global variable: "<<::x<<endl;
    cout<<"Local variable: "<<x<<endl;
}