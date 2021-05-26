// Q. Write a program to read the record of 3 students(name, address and roll) and
// display the record using structure in C++
#include<iostream>
using namespace std;
struct student{
    char name[20];
    int roll;
    char address[20];
};
int main()
{
    student s[3];
    int i,j;
    for (i=0;i<3;i++)
    {
        cout<<"Enter the details of student:"<<endl;
        cout<<"\nNAME:"<<endl;
        cin>>s[i].name;
        cout<<"\nROLL:"<<endl;
        cin>>s[i].roll;
        cout<<"\nADDRESS:"<<endl;
        cin>>s[i].address;
        
    }
    for (j=0;j<3;j++)
    {
        cout<<"\nThe Details are:"<<endl;
        cout<<"\nNAME:"<<s[j].name;
        cout<<"\nROLL:"<<s[j].roll;
        cout<<"\nADDRESS:"<<s[j].address;
    }
    
}