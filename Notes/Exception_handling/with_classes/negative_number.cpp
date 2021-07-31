//Illustration of exception class.
#include<iostream>
#include<math.h>
using namespace std;

class Number
{
    private:
        double num;

    public:
        class NEG{};//exception class.
        //Nesting of class
        void readnum()
        {
            cout<<"Enter number:"<<endl;
            cin>>num;
        }

        double sqroot()
        {
            if (num <0)
            {
                //When problem is detected, exception is raised by using throw
                throw NEG();//NEG() is nameless object.
            }
            else
            {
                return (sqrt(num));
            }
        }
};
int main()
{
    Number n1;
    double res;
    n1.readnum();
    try
    {
        cout<<"Trying to find square root..."<<endl;
        res=n1.sqroot();
        cout<<"Square root is:"<<res<<endl;
        cout<<"Success...."<<endl;

    }
    catch(Number :: NEG)
    //catch(Number :: NEG n) garnu pardaina. extra variable chahidaina.
    {
        cout<<"Square root of negative number is not possible"<<endl;
    }
        
    return 0;
}
    
    
