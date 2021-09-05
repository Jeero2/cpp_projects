//Use of exception handler for program 1.cpp
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    int x=(a-b);

    try
    {
        if (x!=0)
        {
            cout<<"Result:"<<a/x<<endl;
        }
        else{
            throw(x);
        }
    }

    catch (int i)
    {
        cout<<"Division by zero is not allowed."<<endl;
    }

    cout<<"Next statement"<<endl;
    return 0;
            
}