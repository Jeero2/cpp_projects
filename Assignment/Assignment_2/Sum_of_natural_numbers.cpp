#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"Enter number of natural numbers:"<<endl;
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum="<<sum<<endl;
}