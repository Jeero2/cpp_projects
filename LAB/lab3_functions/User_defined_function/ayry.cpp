//area of triangle using user defined function with arguments and return type
#include<iostream>
using namespace std;
float getarea(float,float);
int main()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=getarea(base,height);
    cout<<"area of triangle is:"<<area<<endl;    
} 
float getarea(float b,float h)
{
    float area;
    area=((0.5)*b*h);        
    return area;
}
