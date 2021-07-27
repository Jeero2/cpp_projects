//Write a program finding area of square, rectangle, triangle.Use function overloading technique.

#include<iostream>
#include<math.h>
using namespace std;

class Shape
{
    double parameter1,parameter2,parameter3;
    public:
        int i;
        void getData()
        {
            cout<<"Enter code for area calculation:"<<endl;
            cout<<"Square: 1"<<endl
                <<"Rectangle: 2"<<endl
                <<"Triangle: 3"<<endl;
            cin>>i;
            float a,b,c;
            switch (i)
            {
                case 1:
                {
                    cout<<"Enter length of square:"<<endl;
                    cin>>a;
                    parameter1=a;
                    cout<<"Area:"<<area(a)<<endl;
                    break;
                }
                    
                case 2:
                {
                    cout<<"Enter length and breadth of rectangle:"<<endl;
                    cin>>a>>b;
                    parameter1=a;
                    parameter2=b;
                    cout<<"Area:"<<area(a,b);
                    break;
                }
                    
                case 3:
                {
                    cout<<"Enter three sides of triangle:"<<endl;
                    cin>>a>>b>>c;
                    parameter1=a;
                    parameter2=b;
                    parameter3=c;
                    cout<<"Area:"<<area(a,b,c);
                    break;
                }
                    
                default:
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
            }

        }

        float area(float a)
        {
            return (this->parameter1*this->parameter1);
        }

        float area(float a,float b)
        {
            return (this->parameter1*this->parameter2);
        }

        float area(float a,float b, float c)
        {
            float s;
            s=(a+b+c)/2;
            return (sqrt((s*(s-a)*(s-b)*(s-c))));
        }
        
};
int main()
{
    Shape obj;
    obj.getData();
}

