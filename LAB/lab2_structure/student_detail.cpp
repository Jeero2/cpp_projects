// Q. Write a program in C++ to read the record of a student (name, address, roll) and
// display them using structure
#include<iostream>
using namespace std;
struct student{
    char name[20];
    int roll;
    char address[20];
};
int main()
{
    student s;
    cout<<" Enter the details of student:"<<endl;
    cout<<"\nNAME:"<<endl;
    cin>>s.name;
    cout<<"\nROLL:"<<endl;
    cin>>s.roll;
    cout<<"\nADDRESS:"<<endl;
    cin>>s.address;
    cout<<"\nThe Details are:"<<endl;
    cout<<"\nNAME:"<<s.name;
    cout<<"\nROLL:"<<s.roll;
    cout<<"\nADDRESS:"<<s.address;
}