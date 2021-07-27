//Write a program to generate Fibonacci series(0,1,1,2,3,---) using operator overloading of ++ operator
//a) for post increment

#include<iostream>
using namespace std;
class Series
{
    public:
        int num1=0,num2=1,num3=0;
        
        Series operator ++(int)//post increment overload garda int parameter euta dinu parxa.
        //this int is a dummy parameter. yo kataii pani use hudaina. it is kept so that the prefix
        //and postfix operator can be separated. (pre ra post ko bich aru khassai difference xaina 
        //so yo dummy parameter use garera distinguish matra gareko hoo)
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
        obj++;
    }
}





        

