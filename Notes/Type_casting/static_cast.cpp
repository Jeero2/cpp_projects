#include<iostream>
using namespace std;
int main()
{
    int i;
    float f=3.124f;
    i=f;
    cout<<"value of float is:"<<f<<endl;
    cout<<"value of converted integer is:"<<i<<endl;

    i=static_cast<int>(f);//kunai pani compiler le error faldaina(data loss vanera error didaina yo garyo vane)
    cout<<"value of integer is:"<<i;

}