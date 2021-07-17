#include<iostream>
using namespace std;

int main()
{
    //declare an pointer to store an integer and float value
    int* pointInt;
    float* pointFloat;

    //dynamically allocate memory
    pointInt = new int;//integer datatype ko lai dynamically memory allocate garera tyo memory ko address pointInt ma store garxa 
    pointFloat = new float;

    cout<<"Address assigned to pointInt is:"<<pointInt<<endl;
    cout<<"Address assigned to pointFloat is:"<<pointFloat<<endl;

    //assigning value to memory
    *pointInt=45;
    *pointFloat=45.45f;

    cout<<"value assigned to pointInt is:"<<*pointInt<<endl;
    cout<<"value assigned to pointFloat is:"<<*pointFloat<<endl;

    //deallocating memory
    delete pointInt;
    delete pointFloat;
    
    return 0;

}