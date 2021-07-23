//Illustration of use of template 
#include<iostream>
using namespace std;
//temoplate function
template<class T>
T Large (T n1,T n2)
{
    return (n1>n2)? n1:n2;
}

int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"Enter two integers:"<<endl;
    cin>>i1>>i2;
    cout<<Large(i1,i2)<<" is larger."<<endl;
    //This call is equivalent to Large<int,int>(i1,i2)

    cout<<"Enter two floating point numbers:"<<endl;
    cin>>f1>>f2;
    cout<<Large(f1,f2)<<" is larger."<<endl;
    //This is equivalent to Large<float,float>(f1,f2)

    cout<<"Enter two characters:"<<endl;
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<" has larger ASCII value."<<endl;
    //This is equivalent to Large<char,char>(c1,c2).

    return 0;
}