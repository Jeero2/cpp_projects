//Illustration of why virtual function is needed.
#include<iostream>
using namespace std;
class Shape
{
    protected:
        int width,height;
    public:
        Shape(int a=0 , int b=0)
        {
            width=a;
            height=b;
        }
        void area()
        {
            cout<<"Parent class area:"<<endl;
        }
};
class Rectangle: public Shape
{
    public:
        Rectangle(int a, int b)
        {
            width=a;
            height=b;

        }
        void area()
        {
            cout<<"area of rectangle:"<<width*height<<endl;

        }
};
class Triangle: public Shape
{
    public:
        Triangle(int a,int b)
        {
            width=a;
            height=b;
        }
        
        void area()
        {
            cout<<"Area of triangle:"<<(width*height)/2<<endl;
        }


};
int main()
{
    Shape *shape; //pointer to base class
    Rectangle r(10,13);
    Triangle t(20,5);

    shape=&r;
    shape->area();

    shape=&t;
    shape->area();
    return 0;
}
//In this case during compilation, it always selects the base class function as it is pointer to base class
//object.The compiler is unknown about the address, which is known at runtime and chooses the member 
//function that matches the type of pointer.