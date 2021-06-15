//WAP to define class named student and dispay record if percentage is greater than 40. 
#include<iostream>
using namespace std;
class student 
{
    public:
        char name[50];
        int roll;
        char address[50];
        double percentage;
        void input()
        {
       
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter roll:"<<endl;
            cin>>roll;
            cout<<"Enter address:"<<endl;
            cin>>address;
            cout<<"Enter percentage:"<<endl;
            cin>>percentage;
        }
        void display()
        {
            if (percentage>40)
            {
                cout<<"NAME:"<<name<<endl;
                cout<<"ROLL:"<<roll<<endl;
                cout<<"ADDRESS"<<address<<endl;
            }
            else
            {
                cout<<"SORRY!YOU FAILED."<<endl;
            }
        
        }
};
int main()
{
    student s;
    s.input();
    s.display();
}
