#include<iostream>
#include<math.h>
using namespace std;
class DOB
{
    public:
    int year, month, day;
    class year_error{};
    class month_error{};
    DOB input()
    {
        DOB temp;
            cout << "Enter date of birth: "
                << "\n Year: ";
            cin >> year;
            cout << "Month: ";
            cin >> month;
            cout << "Day: ";
            cin >> day;

            if ( year < 0)
            {
                throw year_error();
            }
            else
            temp.year = year;


            if ( month > 12)
            {
                throw month_error();
            }
            else
            {
                temp.month = month;
            }

            temp.day=day;
        
        return temp;
    }
};

int main()
{
    DOB d;
    DOB DATE;
    try
    {
        DATE = d.input();

    }
    catch (DOB :: year_error)
    {
        cout << "Invalid input" << endl;
    }
    catch (DOB :: month_error)
    {
        cout << "Invallid input" <<endl;
    }
    cout << DATE.year << "/" << DATE.month << "/" << DATE.day; 
        return 0;
}

                 

