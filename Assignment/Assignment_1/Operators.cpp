#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3,sum,subtraction,product,division,number,number1;
    cout<<"input any three numbers:";
    cin>>num1>>num2>>num3;
    //Arithmetic operators and assignment operator
        sum=num1+num2+num3;
        subtraction=num1-num2;
        product=num1*num2*num3;
        division=num1/num2; 
        cout<<"\nsum="<<sum;
        cout<<"\nsubtraction="<<subtraction;
        cout<<"\nproduct="<<product;
        cout<<"\ndivision="<<division;
        //Here +,-,*,/ are arithmetic operators and = is assignment operator.
    //Relational operator and logical operator
    if (num1>num2 && num1>num3)
            cout<<"\nnum1 is the greatest";
    else 
            cout<<"\nnum3 is the greatest";
        //Here > is relational operator and && is logical operator
    //Equality operator
    if (num1==num2)
        cout<<"\ntwo numbers are equal.";
    if(num1!=num2)
        cout<<"\ntwo numbers are not equal.";
        //Here == and != are equality operators.
    //Increment and decrement operator
    number=num1++;
    cout<<"\nnumber="<<number;
    number1=num1--;
    cout<<"\nnumber1="<<number1;
        //here ++ is increment operator and --is decrement operator.       







}