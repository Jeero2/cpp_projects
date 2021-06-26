#include<iostream>
using namespace std;
class box
{
    private:
        double length,breadth,height;
    public:
        box(double len, double brdth, double hgt)
        {
            cout<<"Constructor is called"<<endl;
            length=len;
            breadth=brdth;
            height=hgt;
        }
        double volume()
        {
            return length*breadth*height;
        }
};
int main()
{
    box box1(10.5,10,5.5),box2(20,25.5,2);
    box *ptrbox;
    cout<<"the address of box1 variable is: "<<&box1<<endl;
    //pointer is such a variable which stores the address of other variables.
    ptrbox=&box1;//In this case, box1 ko address ptrbox variable le carry garnasakxa.

    //Access the member function using member access operator (->)
    cout<<"volume of box1: "<<ptrbox->volume()<<endl;

    //save the address of second object
    ptrbox=&box2;
    cout<<"volume of box2: "<<ptrbox->volume()<<endl;
    return 0;
}