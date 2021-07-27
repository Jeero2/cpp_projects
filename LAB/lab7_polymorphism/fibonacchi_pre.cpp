//Write a program to generate Fibonacci series(0,1,1,2,3,---) using operator overloading of ++ operator
//a) for pre increment

#include<iostream>
using namespace std;
class Series
{
    public:
        int num1=0,num2=1,num3=0;
        
        Series operator ++()
        {
            cout<<"\t"<<num1;
            num3=num1+num2;
            num1=num2;
            num2=num3;
        }
};

int main()
{
    Series obj;
    int i,count;
    cout<<"How many numbers do you want to print:"<<endl;
    cin>>count;
    for (i=0;i<count;i++)
    {
        ++obj;
    }
}





        

