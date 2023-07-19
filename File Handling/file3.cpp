#include<iostream>
// #include<string>
#include<fstream>    
// #include<string.h>   
using namespace std;
//reading from a file using getline() function
int main()
{
    //creating an object of ifstream object
    ifstream in("Data.txt");                       //open file for output(writing)

    if(!in)
    {
        //if file is not found or opened
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    // char str[40];
    string str;

    //reading from a file line by line
    while(getline(in,str))
    {
        //using the getline function 
        // in.getline(str,40);      

        cout<<str<<endl;
    }
    
    //closing the object
    in.close();           //closing -> destructor usecase
                        
    return 0;
}

/*


what is the difference between string and char array

char arr[] = {'A','B','C'};      -> char array
char arr[] = {'A','B','C','\0'};      -> string

printf("%s",arr);

*/