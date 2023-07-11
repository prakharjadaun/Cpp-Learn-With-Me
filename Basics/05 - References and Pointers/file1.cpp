#include<iostream>
using namespace std;
//a = 2, b = 3
//4000,5000

//call by value
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 2;      //2000
    int b = 3;      //3000
    cout<<a<<" "<<b<<endl;    //2 3

    swap(a,b);  //2,3

    cout<<a<<" "<<b<<endl;    //2 3

    //will there be any change? will the element be swapped?
}