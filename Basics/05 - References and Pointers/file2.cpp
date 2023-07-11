#include<iostream>
using namespace std;

// & -> address of/referencing operator
//alias / another name

//&n  -> a
//&m  -> b

//call by reference
void swap(int &n,int &m)
{
    int temp = n;    //4000
    n = m;
    m = temp;
}

int main()
{
    int a = 2;   //2000 -> 2
    int b = 3;   //3000 -> 3
    cout<<a<<" "<<b<<endl;

    swap(a,b);   //2,3

    cout<<a<<" "<<b<<endl;

    //will there be any change now? will the element be swapped?
}