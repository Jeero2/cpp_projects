//Same program with use of virtual keyword
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
        virtual void area() //This function indicates that the member function area() is virtual.
        //Yo function kaile call garne vanera compiletime ma navayi runtime ma postpone gardinxa. 
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
    Shape *shape;
    Rectangle r(10,13);
    Triangle t(20,5);

    shape=&r;
    shape->area();

    shape=&t;
    shape->area();
    return 0;
}
//In this case during compilation, it doesn't select the any function.The compiler is later known about the 
//address at runtime and chooses the member function that matches the type of pointer.