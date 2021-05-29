//Program to check whether an integer is zero or even or odd.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    if (n==0)
    {
        cout<<"Zero"<<endl;
    }
    else
    {
        if (n%2==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }
    }
} 