#include<iostream>
#include <fstream>
using namespace std;

class Time
{
    private:
        int hrs , min , sec ;
        string state ;
    
    public:
        Time (int h, int m , int s)
        {
            this->hrs = h;
            this->min = m;
            this-> sec = s;
            this-> state = "\0";
        }
        Time()
        {
            hrs = 0;
            min = 0;
            sec = 0;
            state = " \0";
        }

        Time operator + (Time obj)
        {
            Time t;
            t.hrs = hrs + obj.hrs;
            t.min = min + obj.min;
            t.sec = sec + obj.sec;
            return t;
        }

        Time operator <= (Time obj)
        {
            Time t;
            if (hrs < obj.hrs )
            {
                t.state= "Time is greater by hours";
            }
            else if (hrs == obj.hrs && min < obj.min)
            {
                t.state = "Time is greater by minutes."; 
            }
            else if (hrs == obj.hrs && min == obj.min && sec < obj.sec)
            {
                t.state = "Time is greater by seconds.";
            }
            else
            {
                t.state = "Time is equal.";

            }
            return t;
        }

        ostream& operator << (ostream& os, Time& t)
        {
            os << t.hrs << " hrs " << t.min << " min " << t.sec << " sec " << endl;
            os << t.state << endl; 
            return os;
        }   

};
int main()
{
    Time t1 (2, 2, 2);
    Time t2 (2 ,2 ,2);
    Time t3, t4;
    t3 = t1 + t2;
    t4 = t1 <= t2;
    cout << t3;
    cout << t4;
    return 0;
}