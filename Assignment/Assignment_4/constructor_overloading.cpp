//Illustration of constructor overloading
#include <iostream>
using namespace std;
class display
{
    public:
        display()//constructor with no argument
        {
            cout<<"This is first constructor."<<endl;
        }
        display(int a)//constructor with one integer argument
        {
            cout<<"value of a:"<<a;
        } 
        display(int x, float y)//constructor with two arguments- integer and float datatype 
        {
            cout<<"value of x:"<<x<<endl
                <<"value of y:"<<y<<endl;
        }
};

int main()
{
    display d1;//since it matches first constructor, the first constructor is being self-called.
    display d2(10);//since it matches second constructor, the second constructor is being self-called.
    display d3(10,10.5);//since it matches third constructor, the third constructor is being self-called.
}

              
        