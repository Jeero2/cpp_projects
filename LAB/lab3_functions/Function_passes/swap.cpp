//program to swap values of two variables using pass by reference
#include<iostream>
using namespace std;
void swap(int *x, int *y)//receiving address of a and b
{
    // x contains address of a and y contains address of b 
    int *c;
    c=x;//storing address of a to pointer variable c
    x=y;//storing y (which has address of b) to pointer variable x 
    y=c;//storing c(which contains address of a) to y
}
int main()
{
    int a,b;
    cout<<"Enter first and second variables:A and B"<<endl;
    cin>>a>>b;
    cout<<"The initially entered variables are:"<<a<<" and "<<b<<endl;
    swap(a , b);//passing a and b
    //swap(a,b) recieves values of x and y
    cout<<"the values after swapping are:"<<a<<" and "<<b<<endl;
}