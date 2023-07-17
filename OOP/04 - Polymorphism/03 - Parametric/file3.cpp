#include<iostream>
using namespace std;


template<class T>
T add(T a,T b)
{
    return a+b; 
}

//for the data type the function may not work smoothly, you can explicitly define the function for the data type
string add(string a,string b)   
{
    return a+b;
}

int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(2.03,2.03)<<endl;
    // cout<<add("Prakhar ","Jadaun")<<endl;    //will it work now?
}

/*
Generic functions/Template functions:
- Templates are easy and yet powerful tool.
- Helps us in reducing code redundancy.
*/