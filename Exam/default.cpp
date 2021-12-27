#include<iostream>
using namespace std;

void sum(int a = 0, int b = 0 )
{
    cout << "Sum: " << a + b <<endl;
}
void sum(float a = 0 , float b =0)
{
    cout << "RESULT: " << a + b <<endl;
}
int main()
{
    sum(1);
    sum(1 , 1);
    sum (1.1f);
    sum(1.1f , 1.1f);
    return 0;
}