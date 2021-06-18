//cpp program to illustrate concept of constructors
#include<iostream>
using namespace std;
class construct
{
    public:
        int a,b;
        construct() //constructor is made by naming the method same as that of class.
        {
            a=10;
            b=20;
        }
};
int main()
{
    construct c; //constructor doesn't have to be called. 
    //It is self called when object is made. 
    cout<<"a:"<<c.a<<endl
        <<"b:"<<c.b;
    return 1;
}