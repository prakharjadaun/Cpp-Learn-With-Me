#include<iostream>
using namespace std;

// a function : that performs a task
void display()
{
    cout<<"hello world"<<endl;
}

//need of a function : to reduce code redundency
// 3 -> 011
// 4 -> 100 
int computeSetBits(int num)
{
    return __builtin_popcount(num);   //to count the set bits 
}







int bankbalance = 0;


void credit(int n)
{
    bankbalance = bankbalance + n;
}


void debit(int n)
{
    if(n < bankbalance)
        bankbalance -= n;
    else
    {
        cout<<"Cannot process"<<endl;
    }
}


int main()
{
    cout<<bankbalance<<endl;

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    //function called with no arguments
    display();    

    //function with one arguments
    cout<<computeSetBits(n)<<endl;   //  -> argument


    /*
    Q1: Arguments v/s Parameters
    - When we pass some variables to the function call they are known as arguments.
    - The variables that are defined when the function is declared are known as parameters.
    */
}

/*
Key takeaways: 
Procedural Paradigm

    - Top Bottom approach
    - Not user centric     -> only one user's data will be processed through this function
    - functions are independent and have their scope to the whole program (no data hiding)
    - 

    WILL DISCUSS MORE DIFFERENCES BETWEEN PROCEDURAL (C LANGUAGE) AND OOP (CPP LANGUAGE)
*/
