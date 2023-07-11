#include<iostream>
#include<algorithm>     //for max() function 
#include<climits>       

//signed - to +
//Value of INT_MAX is +2147483647
//Value of INT_MIN is -2147483648


//for 64 bit
//way to compute -> sizeof(int) -> 4 bytes -> 4 x 8 bits -> 32 bits -> 0 to (2^n)-1 (for unsigned) -> total number of int values it can hold
//explore here: https://www.geeksforgeeks.org/climits-limits-h-cc/
                                  
//can you see the change without namespace?
int main()
{
    std::cout<<"Hello world!"<<std::endl;

    //computing the max of array
    int arr[5] = {1,2,3,4,5};
    int max_n = INT_MIN;

    for(int i=0;i<5;i++)
        max_n = std::max(arr[i],max_n);

    std::cout<<"Max of array : "<<max_n<<std::endl;
}

/*

Q1: What is namespace?
    A namespace defines the space or context in which the identifiers(a function, objects or classes) are defined.


    Let's say you wrote a function called mylove() but there is a library which contains a function with the same name as yours 'mylove()'. The compiler will get confuse which 'mylove()' to use and so do you! 

Q2: what is '::'? 
    it is known as scope resolution operator. WILL DISCUSS LATER.
*/