//Illustration of overloading template by another template
#include<iostream>
using namespace std;
template <class T>
void display(T a,T b)//T represents same datatype
{
    cout<<a<<" and"<<b<<endl;
}

template <class T1, class T2>//T1 and T2 represents two different datatypes
void display(T1 a, T2 b)
{
    cout<<a<<" and"<<b<<endl;
}
int main()
{
    display(1,2);//yo garda display(T a, T b) call hunxa 
    display(1,2.2);//yo garda display(T1 a, T2 b) call hunxa
    return 0;
}