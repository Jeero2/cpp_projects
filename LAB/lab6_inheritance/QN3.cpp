#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    protected:
        int code;
        string name;
    public:
       void getData_Person()
       {
           cout<<"Enter code:"<<endl;
           cin>>this->code;
           cout<<"Enter name:"<<endl;
           cin>>this->name;
           cin.ignore();
           
       }
  
};
class Account: public  virtual Person 
{
    protected:
        int pay;
    public:
        void getData_Account()
        {
            cout<<"Enter pay:"<<endl;
            cin>>this->pay;
        }
        void display_Account()
        {
            cout<<"Name:"<<this->name<<endl;
            cout<<"Code:"<<this->code<<endl;
            cout<<"Pay:"<<this->pay<<endl;
            cin.ignore();
        }

};
class Admin : public virtual Person
{
    protected:
        string experience;
    public:
        void getData_Admin()
        {
            cout<<"enter experience"<<endl;
            getline(cin,this->experience);
        }
        void display_Admin()
        {
            cout<<"Name:"<<this->name<<endl;
            cout<<"Code:"<<this->code<<endl;
            cout<<"Experience:"<<this->experience<<endl;
        }
            

};
class Master:public Account, public Admin 
{
    public:
        Master()
        {
            cout<<"Creation of information:"<<endl;
        }


};
int main()
{
   Master m1;
   int choice;
   char c;
   do
   {

        cout<<"Press code according to choice"<<endl;
        cout<<"Account:"<<"\t1"<<endl;
        cout<<"Admin:"<<"\t2"<<endl;
        cin>>choice;
        if (choice==1)
        {
            m1.getData_Person();
            m1.getData_Account();
        }
        else if (choice==2)
        {
            m1.getData_Person();
            m1.getData_Admin();
        }
        else
                cout<<"Invalid input"<<endl;
        cout<<"Do you want to update information(Y/N):"<<endl;
        cin>>c;
   }
   while(c=='Y'||c=='y');
   cout<<"Displaying entered information"<<endl;

   do
   {        
        cout<<"Press code according to choice"<<endl;
        cout<<"Account:"<<"\t 1"<<endl;
        cout<<"Admin:"<<"\t 2"<<endl;
        cin>>choice;
        if (choice==1)
        {
            m1.display_Account();
        }
        else if (choice==2)
        {
           m1.display_Admin();
        }
        else
                cout<<"Invalid input"<<endl;
        cout<<"Do you want to continue(Y/N):"<<endl;
        cin>>c;
   }
   while(c=='Y'||c=='y');
   return 0;

}







