//example of generic class

#include<iostream>
using namespace std;

//stack data structure
template<class T>
class stack
{    
    T *arr;
    int size;
    int ele;
    public:
        stack(int s)
        {
            arr = new T[s];
            size = s;
            ele = 0;
        }

        void push(T val)
        {
            if(ele == size)
            {
                cout<<"stack overflow...!"<<endl;
                return;
            }

            arr[ele] = val;
            ele++;
        }

        void pop()
        {
            if(ele==0)
            {
                cout<<"Stack underflow..!"<<endl;
                return;
            }

            cout<<"Top Element: "<<arr[ele-1]<<endl;
            ele--;
        }
};

int main()
{
    stack<int> st(5);
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    st.pop();
}