#include<iostream>
using namespace std;
class Staff
{
    protected:
        int code;
        string name;
    public:
        void getData_Staff()
        {
            
            cout<<"Enter staff code:"<<endl;
            cin>>this->code;
            cout<<"Enter name:"<<endl;
            cin>>this->name;
            
        }
        
};
class Teacher: public Staff
{
    protected:
        string subject, publication;
    public:
        void getData_Teacher()
        {
            cout<<"Enter subject for teaching:"<<endl;
            cin>>this->subject;
            cout<<"Enter publictaion of book used:"<<endl;
            cin>>this->publication;
        }
            
        void display_Teacher()
        {
            cout<<"Code number for staff is: "<<this->code<<endl;
            cout<<"Name of staff:"<<this->name<<endl;
            cout<<"Subject teached is:"<<this->subject<<endl;
            cout<<"Publication of book used is:"<<this->publication<<endl;
        }
};
class Officer:public Staff
{
    protected:
        string grade;
    public:
        void getData_Officer()
        {
            
            cout<<"Enter grade:"<<endl;
            cin>>this->grade;
        }
        void display_Officer()
        {
            cout<<"Code number for staff is: "<<this->code<<endl;
            cout<<"Name of staff:"<<this->name<<endl;
            cout<<"Grade of officer is:"<<this->grade<<endl;
        }
};
class Typist:public Staff
{
    protected:
        float speed;
    public:
        void getData_Typist()
        {
            cout<<"Enter typing speed in wpm:"<<endl;
            cin>>this->speed;
        }
         
};
class Regular:public Typist
{
    protected:
        float daily_wages=0;
    public:

        void getData_Regular()
        {
            cout<<"Enter your daily wages:"<<endl;
            cin>>this->daily_wages;
        }
            
        void display_Regular()
        {
            cout<<"Code number for staff is: "<<this->code<<endl;
            cout<<"Name of staff:"<<this->name<<endl;
            cout<<"Daily wages of regular typist is:"<<this->daily_wages<<endl;
        }


};
class Casual:public Typist
{
    protected:
        float daily_wages=0;
    public:
        void getData_Casual()
        {
            
            cout<<"Enter your daily wages:"<<endl;
            cin>>this->daily_wages;
        }
            
        void display_Casual()
        {
            cout<<"Code number for staff is: "<<this->code<<endl;
            cout<<"Name of staff:"<<this->name<<endl;
            cout<<"Daily wages of casual typist is:"<<this->daily_wages<<endl;
        }
};


int main()
{
    
    Teacher t;
    Officer o;
    Typist y;
    Regular r;
    Casual c;
    char d;
    int choice;

    do
    {
        cout<<"For creation of database, please enter the information as asked."<<endl;
        cout<<"Choose code for entering:"<<endl;
        cout<<"Teacher"<<"\t"<<"1"<<endl;
        cout<<"Officer"<<"\t"<<"2"<<endl;
        cout<<"Typist"<<"\t"<<"3"<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1:
                t.getData_Staff();
                t.getData_Teacher();
                break;
            case 2:
                o.getData_Staff();
                o.getData_Officer();
                break;
            case 3:
            {
                char a;
                cout<<"Regular or casual typist?"<<"\n Enter R for regular and C for casual:"<<endl;
                cin>>a;
                if (a=='R' || a=='r')
                {
                    r.getData_Staff();
                    r.getData_Typist();
                    r.getData_Regular();
                }
                else if(a=='C'|| a=='c')
                {
                    c.getData_Staff();
                    c.getData_Typist();
                    c.getData_Casual();
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                }
                break;

            }
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
        cout<<"Do you want to continue(Y/N):"<<endl;
        cin>>d;
    }while (d =='Y'||d=='y');
    
    do
    {
          
        cout<<"For retrieving data from database, please enter code:"<<endl;
        cout<<"Teacher"<<"\t"<<"1"<<endl;
        cout<<"Officer"<<"\t"<<"2"<<endl;
        cout<<"Typist"<<"\t"<<"3"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            t.display_Teacher();
            break;
        case 2:
            
            o.display_Officer();
            break;
        case 3:
            {
                char a;
                cout<<"Regular or casual typist?"<<"\n Enter R for regular and C for casual:"<<endl;
                cin>>a;
                if (a=='R' || a=='r')
                {
                
                    r.display_Regular();
                }
                else if(a=='C'|| a=='c')
                {
                    
                    c.display_Casual();
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                }
                break;

            }
        default:
                cout<<"Invalid input"<<endl;
                break;
        }
        
        cout<<"Do you want to continue(Y/N):"<<endl;
        cin>>d;

    }while (d=='Y'||d=='y');
    
} 
    
    

    

    



