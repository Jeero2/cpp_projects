//same program as binary_op using friend functiob
#include<iostream>
using namespace std;

class Distance
{
    public:
        //member objects
        int feet,inch;
        //constructor
        Distance()
        {
            feet=0;
            inch=0;
        }
        //parameterised
        Distance(int f,int i)
        {
            this->feet=f;//jun object le call gareko ho tellai point garira hoo
            this->inch=i;

        }
        //Declaring friend function
        friend Distance operator +(Distance&, Distance&);
        //friend function for binary operator uses two parameters.
        
        void display()
        {
            cout<<"Sum of feet:"<<feet<<endl;
            cout<<"Sum of inch:"<<inch<<endl;
        }

};
Distance operator +(Distance& d1,Distance& d2)
        {
            Distance temp;
            temp.feet = d1.feet +d2.feet;
            temp.inch = d2.inch +d2.inch;
            return temp;

        }

int main()
{
    Distance d1(4,5);
    Distance d2(2,5);
    Distance d3;
    d3= d1+ d2;
    d3.display();

}