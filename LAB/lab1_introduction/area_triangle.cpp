//Program to calculate area of triangle using base and height. 
#include<iostream>
using namespace std;

int main() {
    float b,h;
    float area;
    cout<<"input base and height: ";
    cin>>b>>h;
    area=((0.5)*b*h);
    cout<<"area of triangle is:"<<area;
    return 0;
} 