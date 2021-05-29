//Program to print positive number entered by user.
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    if (n>0)
    {
        cout<<"Number="<<n<<endl;
    }
    else if (n<=0)
    {
        cout<<"Invalid input"<<endl;
    }
} 