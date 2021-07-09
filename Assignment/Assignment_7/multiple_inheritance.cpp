#include<iostream>
using namespace std;
class Union
{
    public:
        Union()
        {
            cout<<"Constructor - union."<<endl;
        }
        ~Union()
        {
            cout<<"Constructor - union."<<endl;
        }
};

class college
{
    public:
        college()
        {
            cout<<"Constructor - college."<<endl;
        }
        ~college()
        {
            cout<<"Destructor - college."<<endl;
            
        }

};


class student : public college,public Union //multiple inheritance
{
    public:
        student()
        {
            cout<<"Constructor - student"<<endl;
        }
        ~student()
        {
            cout<<"Destructor - student"<<endl;
        }
};

int main()
{
    student s1;
    return 0;
}
//OUTPUT:
//Constructor - college.
//Constructor - union.
//Constructor - student
//Destructor - student
//Constructor - union.
//Destructor - college.
