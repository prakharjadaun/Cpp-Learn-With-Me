#include<iostream>
#include<algorithm>     //for max() function 
#include<climits>       // for INT_MIN -> actual value?
using namespace std;   //-> standard functions and objects

int main()
{
    cout<<"Hello world!"<<endl;

    //computing the max of array
    int arr[5] = {1,2,3,4,5};
    int max_n = INT_MIN;

    for(int i=0;i<5;i++)
        max_n = max(arr[i],max_n);

    cout<<"Max of array : "<<max_n<<endl;
}