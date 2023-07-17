#include<iostream>
using namespace std;

//this is how you define a template
template<class T> // T can be any data type
T add(T a,T b)
{
    return a+b; 
}

//this is a generic function / template function
//string is a special data type not primitive


int main()
{
    cout<<add(1,2)<<endl;   //int 
    cout<<add(2.03,2.03)<<endl;   //float
    // cout<<add("Prakhar ","Jadaun")<<endl;    //will it work for strings?
    
}

/*
    What are templates?
    - Templates in c++ is defined as a blueprint or formula for creating a generic class or a function. 
    - Generic Programming is an approach to programming where generic types are used as parameters in algorithms to work for a variety of data types.
*/