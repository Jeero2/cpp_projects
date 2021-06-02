//area of triangle using user defined function without arguments and with return type
#include<iostream>
using namespace std;
float getarea();
int main()
{
    float area;
    area=getarea();
    cout<<"area of triangle is:"<<area<<endl; 
} 
float getarea()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=((0.5)*base*height);
    return area;
}
