//program to make a simple calculator
#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    int a;
    cout<<"Enter your numbers:"<<endl;
    cin>>n1>>n2;
    cout<<"Enter code according to operator:"<<endl;
    cout<<"1:+\n2:-\n3:*\n4:/"<<endl;
    cout<<"code:";
    cin>>a;
    switch (a)
    {
        case 1 :
            {
                float sum;
                sum=n1+n2;
                cout<<"sum="<<sum<<endl;
                break;
            }
        case 2:
            {
                float difference;
                difference=n1-n2;
                cout<<"diference="<<difference<<endl;
                break;
            }
        case 3 :
            {
                float product;
                product=n1*n2;
                cout<<"product:"<<product<<endl;
                break;
            }
        case 4 :
            {
                float quotient;
                quotient=n1/n2;
                cout<<"quotient:"<<quotient<<endl;
                break;
            }
        default:
            {
                cout<<"INVALID INPUT"<<endl;
            }
    }

} 