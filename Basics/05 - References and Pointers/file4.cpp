#include<iostream>
#include<stdlib.h>
using namespace std;

//operators
//& -> address of (referencing operator)
//* -> value at   
int main()
{
    // int a = 2;      //2000

    // int *ptr = &a;  //stores the address

    // cout<<ptr<<endl;   //address
    // cout<<*ptr<<endl;   //value 


    // int arr[] = {1,2,3};

    // int n=3;
    
    // int *arr2 =(int*)malloc(n*sizeof(int));   //3 -> integers

    // // ______ ______ ______ 
    // // arr2+2 -> 

    // int arr[] = {1,2,3,4,5};

    // cout<<arr<<endl;  //array ka base 
    

    // cout<<arr[0]<<endl;
    // cout<<0[arr]<<endl;

    // //why the indexing starts from 0?

    // cout<<*(arr+0)<<endl;
    // cout<<*(0+arr)<<endl;

    //char -> 1byte
    //int -> 4 byte


    //3 bytes -> 12 bytes (memory wasted)
    int *arr2 = (int*)malloc(3*sizeof(int));  

    for(int i=0;i<3;i++)
        cout<<arr2[i] <<" ";
    
    cout<<endl;

    int *arr3 = (int *)calloc(3,sizeof(int));
    for(int i=0;i<3;i++)
        cout<<arr3[i]<<" ";
}