#include<iostream>
using namespace std;
int main()
{
    cout << "Normal variable" <<endl;
    int* a_ptr;
    a_ptr = new int;
    *a_ptr = 5;
    cout << *a_ptr << endl;

    delete a_ptr;
    cout << "Array" << endl;
    int* b_ptr;
    b_ptr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        b_ptr[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << b_ptr[i] << endl;
    }
        
    delete [] b_ptr;
    return 0;
}
    