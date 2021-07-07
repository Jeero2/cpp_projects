//WAP to add feet and inch provided by two objects using this pointer.
#include<iostream>
using namespace std;
class Distance
{
    public:
        //member objects
        int feet,inch;

        Distance()
        {
            feet=0;
            inch=0;
        }

        //parameterised
        Distance(int feet,int inch)
        {
            this-> feet=feet;
            this->inch=inch;
        }
        //Overloading + operator to perform addition
        Distance operator +(Distance d2)
        {
            Distance d3;
            d3.feet=this->feet+d2.feet;//this->feet le d1.feet lai point garira ho
            d3.inch=this->inch+d2.inch;
            return d3;

        }
        void display()
        {
            cout<<"Sum of feet:"<<feet<<endl;
            cout<<"Sum of inch:"<<inch<<endl;
        }

};
int main()
{
    Distance d1(4,5);
    Distance d2(2,5);
    Distance d3;
    d3=d1+d2;
    d3.display();

}