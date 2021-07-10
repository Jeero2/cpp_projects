//single inheritance means euta base class bata euta derived class banaunu
#include<iostream>
using namespace std;
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
class student : public college
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
// OUTPUT:
// Constructor - college.
// Constructor - student
// Destructor - student
// Destructor - college.

