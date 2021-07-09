//multilevel means euta base class bata euta derived class banaune ra bata feri tesbata arko derived class banaunu
#include<iostream>
using namespace std;
class person
{
    public:
        person()
        {
            cout<<"Constructor - person"<<endl;
        }
        ~person()
        {
            cout<<"Destructor - person"<<endl;
        }
};
class student : public person
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
class representative : public student //representative( CR ) le student ko inherit garyo and person ko pani inherit garyo.
{
    public:
        representative()
        {
            cout<<"Constructor - representative"<<endl;
        }
        ~representative()
        {
            cout<<"Destructor - representative"<<endl;
        }

}; 

int main()
{
    representative obj1;
    return 0;
}
//OUTPUT:
//Constructor - person
//Constructor - student
//Constructor - representative
//Destructor - representative
//Destructor - student
//Destructor - person