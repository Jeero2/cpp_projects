//Example of exception
//exception are errors which we donot find at compile time but we encounter these errors at runtime.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of a and b:"<<endl;
    cin>>a>>b;
    int x = a/(a-b);//Here, if a=b, x becomes infinity or else the codes are all fine.so this is exception.
    cout<<"Value of x is:"<<x<<endl;
    return 0;
}