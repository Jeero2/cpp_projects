#include<iostream>
using namespace std;
class unary
{
    private:
        int a,b,c;
    public:
        void getdata(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;
        }
        //syntax : returntype operator operand()
        void  operator -()  //unary operator overloading. Here, - is being overloaded.
        {
            //meaning addition to operator is called operator overloading.
            a = -a;
            b = -b;
            c = -c;
        }
        void display()
        {
            cout<<"Value of a:"<<a<<endl
                <<"Value of b:"<<b<<endl
                <<"Value of c:"<<c<<endl;
        }
};
       
int main()
{
    unary obj1;
    obj1.getdata(5,6,-7);
    obj1.display();
    -obj1;
    obj1.display();
    
}
