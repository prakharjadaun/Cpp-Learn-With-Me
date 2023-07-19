#include<iostream>
using namespace std;

//handling an exception using if else

int main()
{
    int a;
    int b;
    cin>>a>>b;
    if(b!=0)
        cout<<a/b<<endl;
    else
        cout<<"denominator should not be zero"<<endl;
}

