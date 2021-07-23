//forceful datatype conversion
//syntax: reinterpret_cast<target type>(expression)
#include<iostream>
using namespace std;
int main()
{
    int i=100;
    cout<<"value of address of i is:"<<&i;
    int *p;

    //p=i;//garna mildaina

    p=reinterpret_cast<int *>(i);
    cout<<"value of p is:"<<p;
}