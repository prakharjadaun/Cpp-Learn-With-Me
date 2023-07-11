#include<iostream>
using namespace std;

//creating a namespace
namespace RCB
{
    void func()
    {
        cout<<"E sala cup namde"<<endl;
    }
}

namespace MI
{
    void func()
    {
        cout<<"Ye umpires jyada paise maang rhe"<<endl;
    }
}

using namespace RCB;

int main()
{
    //calls the function under RCB namespace because it is defined
    func();

    //we can also call the func inside MI
    MI::func();
}

/*
Key takeaways:

    - when you use only namespace std functions and objects, you can include in the directives the namespace std
    - but when you have to use two or more namespaces, which can have similar functions, DO NOT INCLUDE THE NAMESPACE IN DIRECTIVES
*/
