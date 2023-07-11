// 2) To define a function outside a class. 

#include<iostream>
using namespace std;

class Prakhar
{
    public: 
        void work();
};


//definning the function outside the class using '::'
void Prakhar::work()
{
    cout<<"work in progress"<<endl;
}

