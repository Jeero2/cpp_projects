//WAP to add two complex numbers passing object as an argument and returning resultant complex number
#include<iostream>
using namespace std;
class complex
{
    public:
        int r,i;
    
    void input()
    {
        cout<<"Enter real and imaginary parts of complex number:"<<endl;
        cin>>r>>i;
    }
    complex sum(complex c1, complex c2) //yesle object as parameter linxa.
    {
        complex c3;//naya object banayo

        c3.r = c1.r + c2.r;
        c3.i = c1.i + c2.i;

        return (c3); //object lai nai return gareko.
    }

    void display()
    {
        cout << "the real number is " << r << " + j" << i << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.input();
    c2.input();

    c3 = c3.sum(c1, c2); //object as parameter pathako
    c3.display();

    return 0;
}
     

