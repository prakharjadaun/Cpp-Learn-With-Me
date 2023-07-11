// To access a class’s static variables. 
#include<iostream>
using namespace std;

class UPES
{
    public:
        static string name;

    UPES()
    {
        name = "University of Petroleum and Energy Studies";
    }
};

int main()
{
    cout<<UPES::name<<endl;
}