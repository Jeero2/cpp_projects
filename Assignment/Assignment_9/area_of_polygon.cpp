//Write a program having polygon as an abstract class with length and height as its data member. Create derive class
//rectangle and triangle. Make Area() as pure virtual function and redefine it in derived class to calculate 
//respective area     
#include<iostream>
using namespace std;
class polygon
{
    protected:
        float height,length;
    public:
        void get_Data(double height,double length)
        {
            this->height=height;
            this->length=length;
        }

        virtual void display_area()=0;
};

class rectangle: public polygon
{
    public:
        void display_area()
        {
            double area=length*height;
            cout<<"Area of rectangle:"<<area<<endl;

        }
};
class triangle: public polygon
{
    public:
        void display_area()
        {
            double area=(length*height)/2;
            cout<<"Area of triangle:"<<area<<endl;

        }
};

int main()
{
    rectangle r;
    triangle t;
    r.get_Data(4,5);
    t.get_Data(4,5);
    r.display_area();
    t.display_area();
}