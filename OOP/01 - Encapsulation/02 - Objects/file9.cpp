#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"Default"<<endl;
    }
    Test(int x){
        cout<<"Parameterized"<<endl;
    }
};

class Main{
    Test t;
    public:
    
    // Main():t(10)
    // {}
    

    Main()
    {
        t=Test(10);
    }
};

int main(){
    Main m;
    return 0;
}