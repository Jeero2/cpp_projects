#include<iostream>
using namespace std;
class complex
{
    private:
        float real=0,imaginary=0;
    public:    
        void getdata()
        {
            
            float r,i;
            cout<<"Real part: "<<endl;
            cin>>r;
            cout<<"Imaginary part: "<<endl;
            cin>>i;
            real=r;
            imaginary=i;
        }
            
        
        complex operator +(complex c)
        {
            complex temp_obj;
            temp_obj.real=real+c.real;
            temp_obj.imaginary=imaginary+c.imaginary;
            return temp_obj;
        }
        void display()
        {
            cout<<"Sum of complex numbers = "<<real<<"+"<<imaginary<<"j"<<endl;
        }

};

int main()
{
    complex num1,num2,num3;
    num1.getdata();
    num2.getdata();
    num3=num1+num2;
    num3.display();
}

         

