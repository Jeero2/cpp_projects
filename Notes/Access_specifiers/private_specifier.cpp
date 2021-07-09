//Demonstration of private access specifier
#include<iostream>
using namespace std;
class Circle
{
    private:
        double radius;//derived class le eslai access garna mildaina.Protected ko concept teii vaera ako ho.
    public:
        double compute_area(double r)
        {
            radius=r;//object le direct access payena. compute_area le matra access payo.
            return 3.14*radius*radius;
        }

};
int main()
{
    Circle obj;
    //obj.radius=5.5 garna paudaina. It is inaccessible.
    cout<<"Area is: "<<obj.compute_area(5.5)<<endl;
    return 0; 
}