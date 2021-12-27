#include<iostream>
using namespace std;
int Sum_result(int &a, int &b);

class Sum
{
    public:
        int num1, num2;
        void Get_Data()
        {
            cout << "Enter data: " <<endl;
            cin >> num1 >> num2;
        }

        void display()
        {
            cout << "Sum: " << Sum_result(num1, num2);
        }
        friend int Sum_result(int &a, int &b);

};

int Sum_result(int &a, int &b)
{
    return a + b;
}

int main()
{
    Sum s;
    s.Get_Data();
    s.display();
    return 0;
}