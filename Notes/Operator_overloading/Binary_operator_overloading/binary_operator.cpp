//Illustration of binary operator overloading
#include<iostream>
using namespace std;
class binary
{
    int a,b;

    public:
        binary()
        {
            a=0;
            b=0;
        }
        binary(int x,int y)
        {
            a=x;
            b=y;
            //b1.a=10,b1.b=20 and b2.a=30,b2.b=40
        }
    binary operator +(binary bin) //binary bin vaneko b2 pass vayera auxa
    {
        binary temp;//naya object banyo so constructor call hunxa
        cout<<"Value of temp.a:"<<temp.a<<endl;//temp.a constructor call vako le 0 hunxa
        cout<<"Value of temp.b:"<<temp.b<<endl;

        cout<<"Value of bin.a:"<<bin.a<<endl;
        cout<<"Value of bin.b:"<<bin.b<<endl;
        
        temp.a=a+bin.a;//esma a vaneko b1.a hunxa i.e 10
        temp.b=b+bin.b;
        return temp;
    }
    void display();
};
void binary::display() //binary vitra ko display vaneko ho
//display class vitrai declare garyo vanera :: use garirakhnu pardaina
{
    cout<<"Addition of first numbers:"<<a<<endl;
    cout<<"Addition of second numbers:"<<b<<endl;
};
    
        
int main()
{
    binary b1(10,20); 
    binary b2(30,40); 
    binary b3;          
    b3=b1+b2;//calling function
    b3.display();
    
}
