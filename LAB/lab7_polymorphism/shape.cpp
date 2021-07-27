//Create a base class called shape.Use this class to store two double type values that could be used to compute
//the area of figures.Derive two specific classes called triangle and rectangle from  the base shape.Add to the
//base class, a member function get_data() to initialize base class data members and another member function
//display_area() to compute and display the area of figures.Make display_area() as virtual function and 
//redefine this function in  the derived class to suit their requirements.

#include<iostream>
using namespace std;
class Shape
{
    protected:
        double parameter1,parameter2;

    public:
        void getData(double parameter1, double parameter2)
        {
            this->parameter1=parameter1;
            this->parameter2=parameter2;
        }

        virtual void display_area()=0;
};

class Triangle: public Shape
{
    public:
        void display_area()
        {
            double area;
            area=(parameter1*parameter2)/2;
            cout<<"The area of triangle is:"<<area<<endl;
        }
};

class Rectangle: public Shape
{
    public:
        void display_area()
        {
            double area;
            area=(parameter1*parameter2);
            cout<<"The area of rectangle is:"<<area<<endl;
        }

};

int main()
{
    Triangle obj1;
    Rectangle obj2;
    obj1.getData(4,2);
    obj1.display_area();
    obj2.getData(4,2);
    obj2.display_area();
}






