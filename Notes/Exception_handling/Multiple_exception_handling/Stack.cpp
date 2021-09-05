#include<iostream>
using namespace std;
const int Size=4;

class push_error{};
class pop_error{};

class Stack
{
    public:
        int s[Size];
        int n;

        void push()
        {
            cout << "Enter the number of data you want to push:" <<endl;
            cin >> n;

            if (n > Size)
            {
                throw push_error();
            }
            else
            {
                cout << "Enter data:" <<endl;
                for (int i = 0; i < n; i++)
                {                    
                    cin >> s[i];
                }

            }
        }

        void pop()
        {
            int j;
            cout << "Enter the number of data you want to pop:" <<endl;
            cin >> j;

            if (j > n)
            {
                throw pop_error();
            }
            else
            {
                for (int i = 0; i < j; i++)
                {               
                    cout << "Data popped:" << s[n-1] <<endl;
                    n--;
                }
            }
        }
};


int main()
{
    Stack s;
    try
    {
        s.push();
        s.pop();
    }

    catch(push_error)
    {
        cout << "More than Stack capacity." <<endl;
    }
    
    catch(pop_error)
    {
        cout << "More than data present in stack." <<endl;
    }

    return 0;
}