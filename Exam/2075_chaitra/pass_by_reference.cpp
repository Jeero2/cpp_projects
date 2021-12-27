#include<iostream>
using namespace std;

void swap( int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int num1, num2;
    cout << "Enter values of two numbers: ";
    cin >> num1 >> num2;
    swap (num1,num2);
    cout << "Values after swapping: " << num1 << "\t" << num2 <<endl;
    return 0;
}