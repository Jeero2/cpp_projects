#include <iostream>
#include <fstream>
using namespace std;

class Time
{
    public:
        int hrs = 0, min = 0 , sec = 0;

    friend ostream& operator << (ostream& os, Time& t);
    friend istream& operator >> (istream& is, Time& t);
};           

ostream& operator << (ostream& os, Time& t)
{
    os << t.hrs << " hrs " << t.min << " min " << t.sec << " sec "; 
    return os;
}
istream& operator >> (istream& is,Time& t)
{
    is >> t.hrs >> t.min >> t.sec;
    return is;
}

int main()
{
    Time t_obj;
    cout << "Enter you time:" << endl;
    cin >> t_obj;
    cout << "Entered time is:" << t_obj << endl;
    return 0;
}