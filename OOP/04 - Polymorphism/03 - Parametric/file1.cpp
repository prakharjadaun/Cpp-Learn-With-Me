#include<iostream>
using namespace std;

//function overloading

int add(int a,int b)
{
    return a+b; 
}

double add(double a, double b)
{
    return a+b;
}

string add(string a,string b)
{
    return a+b;
}


int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(2.03,2.03)<<endl;
    cout<<add("Prakhar ","Jadaun")<<endl;
}