//stand for input-output stream
#include<iostream>    



/*
#include<bits/stdc++.h>  
this header file contains every standard library
to reduce time in competitive contests, you can use this library
*/


/*
Input Stream: If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input.

Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.
*/

int main()
{
    //the two instances/objects of iostream class
    //1. cin : to take the inputs -> input stream
    //2. cout : to print the output -> output stream


    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;



    

    //printing the number n
    std::cout<<n<<std::endl;            //std::endl -> to give a newline character (to move to new line)

    /*
    1. << -> we use this with cout to print on the screen. 
          -> known as INSERTION operator (intuition as we are pasting something on the screen)

    2. >> -> we use this with cin to take the input from the standard input
          -> knowns as EXTRACTION operator (intuition as we are extracting/mining something from the terminal)
    */


   /*
   cerr<<"message"
   There are two more instances/objects of iostream class
   - cerr : Un-buffered standard error stream (used to output the errors immediately)
   - clog : buffered standard error stream (used to output the errors but not immediately)


    Ques1: unbuffered v/s buffered?
        Cerr does not have any buffer to store the error message and display it later, so it displays the message immediately, 
        
        while clog uses buffer to store the error messages and displays only when the buffer is been filled or until it is been flushed explcitly by flush().


    Ques2: what is buffer?
        Buffer is a basic term that denotes a computer memory block that acts as a temporary placeholder.


    Ques3: Need of buffer? 
        As your computer has two storage, from which RAM is referred to as buffer. (RAM is used for faster accessing of memory right?)
        In C++, we also have a buffer (temporary memory) in which store data which directly helps us in speeding up the calculation process.
        Example: word file
        
        cout & clog uses buffer to print the output on the screen.
        cout ---> buffer ---> display screen
        cerr --- --- --- ---> display screen
   */
    std::cerr<<"An error occured (not really though!)"<<std::endl;
}