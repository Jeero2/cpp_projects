#include<iostream>
using namespace std;

void Sum(int a = 0, int b = 0)
{
    cout << "\nSum: " << a+b;

}
int main()
{
    Sum();
    Sum(1);
    Sum(1,2);
    return 0;
}