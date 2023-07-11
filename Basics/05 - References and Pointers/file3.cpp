#include<iostream>
using namespace std;

// * -> derefencing operator

int *p;   // -> p is a pointer to an integer
int *q;


void swap(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a = 2;          //2000
    int b = 3;          //3000
    cout<<a<<" "<<b<<endl;



    swap(a,b);

    cout<<a<<" "<<b<<endl;

    //will there be any change now? will the element be swapped?

    // NULL
}
/*
---References != Pointers---

Differences between References and pointers

1. Basic:
    - Pointer is the memory address of a variable
    - The Reference is an alias (another name) for a variable

2. Returns:
    - Pointer variable returns the value located at the address stored in pointer variable which is preceded by the * pointer sign
    - The reference variable returns the address of the variable preceded by the reference sign

3. Operators:
    - Pointers:  -> (arrow)
    - References: & (address of operator)

int *p = NULL;


4. Null reference:
    - Pointers can refer to NULL
    - Reference variable can never refer to NULL
*/