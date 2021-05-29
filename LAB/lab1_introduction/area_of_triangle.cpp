//Program to find area of triangle using three sides of triangle

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    float area;
    float s;
    cout<<"\nenter three sides of triangle";
    cin>>a>>b>>c;
    s=((a+b+c)/2);
    cout<<"\ns= "<<s;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"\narea of triangle is:"<<area;
} 