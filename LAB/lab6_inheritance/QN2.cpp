#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
        int roll;
        string name;
    public:
       void getData_Student()
       {
           cout<<"Enter roll:"<<endl;
           cin>>this->roll;
           cout<<"Enter name:"<<endl;
           cin>>this->name;
           cin.ignore();//getline le enter lai ni input liney vayeko le tyo enter lai ignore gara vanera command deko
           
       }
  
};
class Test: public  virtual Student 
{
    protected:
        int maths=0,english=0;
    public:
        void getData_Test()
        {
            cout<<"Enter marks in English:"<<endl;
            cin>>this->english;
            cout<<"Enter marks in Maths:"<<endl;
            cin>>this->maths;
        }
        void display_Test()
        {
            cout<<"Name:"<<this->name<<endl;
            cout<<"Roll:"<<this->roll<<endl;
            cout<<"Marks in English:"<<this->english<<endl;
            cout<<"Marks in Maths:"<<this->maths<<endl;
            
        }

};
class Sport : public virtual Student
{
    protected:
        int marks=0;
    public:
        void getData_Sport()
        {
            cout<<"Enter marks in sports:"<<endl;
            cin>>this->marks;
        }
        void display_Sport()
        {
            cout<<"Marks in sports:"<<this->marks<<endl;
        }        
     
};
class Result:public Test, public Sport 
{
    private:
        float result=0;
    public:
        void display_Result()
        {
            result=this->english+this->maths+this->marks;
            cout<<"Total marks is:"<<this->result<<endl;
        }



};
int main()
{
   Result r1;
   cout<<"Creation of information:"<<endl;
   r1.getData_Student();
   r1.getData_Sport();
   r1.getData_Test();
  
   cout<<"Displaying entered information"<<endl;
   r1.display_Test();
   r1.display_Sport();
   r1.display_Result();
  
   return 0;

}







