//Illustration of throwing specific exception

#include<iostream>
using namespace std;

class Day_error{};
class Month_error{};
class Year_error{};

class Date
{
    private:
        int day, month, year;

    public:
        void read_date() throw(Day_error, Month_error)
        {
            cout << "Enter day:" <<endl;
            cin >> day;

            if (day > 31)
            {
                throw Day_error();
            }

            cout << "Enter month:" <<endl;
            cin >> month;

            if (month > 12)
            {
                throw Month_error();
            }

            cout << "Enter year:" <<endl;
            cin >> year;

            if (year < 0)
            {
                throw Year_error();
            }

        }

        void show_date()
        {
            cout << "DOB:" << day <<"/" << month <<"/" << year <<endl;
        }
};
int main()
{
    Date d;
    try
    {
        d.read_date();
        d.show_date();
    }

    catch (Day_error)
    {
        cout<<"INVALID! Day cannot be greater than 31."<<endl;
    }

    catch (Month_error)
    {
        cout<<"INVALIID! Month cannot be greater than 12."<<endl;
    }

    catch (Year_error)
    {
        cout<<"INVALID! Year cannot be negative."<<endl;
    }

    return 0;
}

