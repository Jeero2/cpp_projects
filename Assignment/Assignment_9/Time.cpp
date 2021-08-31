//Write a program to create class “time” with data members hours, mins and second. Add two “time” objects by taking
//object as an argument and also returning object as an argument. 
#include<iostream>
using namespace std;

class time
{
    public:
        double hours,minutes,seconds;

    void input()
    {
        cout<<"Enter time:"
                <<"\n Hours:"<<endl;
        cin>>hours;
        cout<<"Minutes:"<<endl;
        cin>>minutes;
        cout<<"Seconds:"<<endl;
        cin>>seconds;
    }   

    time sum(time t1,time t2)
    {
        time t3_sum;
        double total1,total2;
        total1=t1.seconds+(t1.minutes)*60+(t1.hours)*3600;
        total2=t2.seconds+(t2.minutes)*60+(t2.hours)*3600;
        int sum_in_seconds=total1+total2;
        int hrs=0,min=0;
        
        if (sum_in_seconds>=3600)
        {
            hrs=sum_in_seconds/3600;
            sum_in_seconds=sum_in_seconds%3600;
        }
        if (sum_in_seconds>=60)
        {
            min=sum_in_seconds/60;
            sum_in_seconds=sum_in_seconds%60;
        }
            
        
        t3_sum.hours=hrs;
        t3_sum.minutes=min;
        t3_sum.seconds=sum_in_seconds;
        return t3_sum;
    }


};
int main()
{
    time t1,t2,sum;
    t1.input();
    t2.input();
    sum=sum.sum(t1,t2);
    cout<<"Added time is:"<<endl;
    cout<<"Hours:"<<sum.hours
        <<"\nMinutes:"<<sum.minutes
        <<"\nSeconds:"<<sum.seconds<<endl;
    return 0;
}

