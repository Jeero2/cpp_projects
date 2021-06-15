//WAP to define a class employee with data members ID,name,salary and dispay records in tabular form. 
#include<iostream>
using namespace std;
class employee 
{
    public:
        char name[50];
        int I[5];
        double salary[5];
        int n;
        void input()
        {
            for (n=0;n<5;n++)
            {
                cout<<"Enter name:"<<endl;
                cin>>name[n];
                cout<<"Enter ID:"<<endl;
                cin>>I[n];
                cout<<"Enter salary:"<<endl;
                cin>>salary[n];

            }       
            
        }
        void display()
        {
            for (n=0;n<5;n++)
            {
                cout<<I[n];
                cout<<"\t"<<name[n];
                cout<<"\t"<<salary[n]<<endl;

            }          
            
        }
               
        
};
int main()
{
    int n;
    employee s;
    s.input();
    cout<<"ID:"<<"\tNAME:"<<"\tSALARY:"<<endl;    
    s.display();
     
}

    
