//area of triangle using user defined function without arguments and no return type
#include<iostream>
using namespace std;
void getarea();
int main()
{
    getarea();
} 
void getarea()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=((0.5)*base*height);
    cout<<"area of triangle is:"<<area<<endl;         
}
