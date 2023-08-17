//Understanding the memory initialization for virtual classs
#include<iostream>
using namespace std;

//objective: to get the sizeof class objects when
//1. we have a virtual function side the class and int variable
//2. we have normal class with a int data member
//3. we have normal class with no data member

class sample
{
    private:
    int i;
    public:
        virtual void display()
        {
            cout<<"Inside sample"<<endl;
        }
};

class example
{
    private:
        int i;
    public:
        void display()
        {
            cout<<"In example class"<<endl;
        }
};

class trial
{
    public:
        void display()
        {
            cout<<"Inside trial class"<<endl;
        }
};

int main()
{
    sample s;
    example e;
    trial t;

    cout<<sizeof(s)<<endl; //8
    /*
        -> the size of the object of a class containing virtual function is sizeof(int) + sizeof(void *)
        -> compiler inserts 'this pointer' called VPTR if you have one or more virtual functions
    */
    cout<<sizeof(e)<<endl; //4
    /*
        -> with no virtual function, we will get the size of example class as expected. That is size of the data members
    */
    cout<<sizeof(t)<<endl; //1
    /*
        -> compiler forces the object t to be of non zero size (because each object must have a distinct address)
        -> why 1? because smallest non zero positive integer is 1 byte
    */
}