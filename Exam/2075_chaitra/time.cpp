#include<iostream>
using namespace std;
class Time
{
    private:
        int hours, minutes, seconds;

    public:
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int hrs, int min, int sec)
        {
            this->hours = hrs;
            this->minutes = min;
            this->seconds =sec;
        }
        Time operator +(Time obj)
        {
            Time t;
            t.hours = hours + obj.hours;
            t.minutes = minutes +obj.minutes;
            t.seconds = seconds +obj.seconds;
            return t;
        }
        void display()
        {
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }

};
int main()
{
    Time t1(2, 2, 2);
    Time t2(2, 2, 2);
    cout << "Entered time: " << endl;
    t1.display();
    t2.display();
    Time t3;
    t3 = t1 + t2;
    cout << "Added time: " <<  endl; 
    t3.display();
}