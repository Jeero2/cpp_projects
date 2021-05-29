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
        cout<<"NAME:"<<endl;
        cin>>s[i].name;
        cout<<"ROLL:"<<endl;
        cin>>s[i].roll;
        cout<<"ADDRESS:"<<endl;
        cin>>s[i].address;
        
    }
    cout<<"The Details are:"<<endl;
    for (j=0;j<3;j++)
    {
        cout<<"NAME:"<<s[j].name;
        cout<<"  ROLL:"<<s[j].roll;
        cout<<"  ADDRESS:"<<s[j].address<<endl;
    }
    
}