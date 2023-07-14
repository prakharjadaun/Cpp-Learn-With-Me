#include<iostream>
using namespace std;

/*
Three types of access specifiers: 
    1. Public
    2. Protected
    3. Private
*/

//Private: data members/member function would only be accessible to member functions inside the class. 

class Bank
{
    private:
        double bankBalance;
        int accountNo;

    public:
        //constructor
        Bank(double bb,int acc):bankBalance(bb),accountNo(acc)
        {}

        //function to credit an amount 
        void credit(double amount)
        {
            bankBalance += amount;
        }

        //function to debit an amount 
        void debit(double amount)   
        {
            if(amount <= bankBalance)
                bankBalance = bankBalance - amount;
            else
                cout<<"Insufficient bank balance..!"<<endl;
        }

        //function to display account details
        void displayDetails()
        {
            cout<<"Account Number: "<<accountNo<<endl;
            cout<<"Balance: "<<bankBalance<<endl;
        }

};  

int main()
{
    //passing the arguments to the constructor : bank balance and account no
    Bank accHolder(1500,12345);
    accHolder.displayDetails();
    
    // cout<<"Your bank balance: "<<accHolder.bankBalance<<endl;

}