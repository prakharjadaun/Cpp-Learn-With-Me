#include<iostream>
using namespace std;

class Bank
{
    public:
        double bankBalance;
        int accountNo;

        //constructor 
        Bank(double bb,int acc):bankBalance(bb),accountNo(acc)
        {}

};  

int main()
{
    //passing the arguments to the constructor : bank balance and account no
    Bank accHolder(1500,12345);

    //For an extent you can allow your bank to display your account number to everyone
    cout<<"Your Account number: "<<accHolder.accountNo<<endl;

    //But will you allow your bank to display your bank balance? 
    cout<<"Your bank balance: "<<accHolder.bankBalance<<endl;

    //That's when access level specifiers comes into the picture

    //public: this access level specifiers states that all the data members and member functions under public are accessible through class object (except the constructor).

}