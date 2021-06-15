//WAP to calculate simple interest from given principle,rate and time. set rate=15 when no rate is provided. 
#include<iostream>
using namespace std;
class interest
{
    public:
       
    void display(float principle, float rate,float time)
    {
        double i=(principle*time*rate)/100;
        cout<<"INTEREST:"<<i;
    } 
    void display(float principle,float time)
    {
        double i=(principle*time*15)/100;
        cout<<"INTEREST:"<<i;
    }  

};
int main()
{
    interest a;
    char answer;
    double principle,rate;
    float time;
    cout<<"Enter principle:"<<endl;
    cin>>principle;
    cout<<"Enter time:"<<endl;
    cin>>time;
    cout<<"Do you want to enter rate:Y/N:"<<endl;
    cin>>answer;
    if (answer=='Y' || answer=='y')
    {
        cout<<"enter rate:"<<endl;
        cin>>rate;
        a.display(principle,rate,time);
    }
    else
    {
        a.display(principle,time);
    }
    
    

}

