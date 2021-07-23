//Syntax: dynamic_cast<new_type>(expression)


#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<"Base"<<endl;
        }
};

class Derived:public Base
{
    public:
        void print()
        {
            cout<<"Derived 1"<<endl;
        }
};
int main()
{
    Base *bptr,bpt;
    Derived *dptr,dpt;

    bptr=&dpt;
    dptr=dynamic_cast<Derived *>(bptr);//base pointer lai derived pointer ma convert garera dptr ma rakheko
    dptr ->print();

    //bptr=&bpt;
    //dptr=dynamic_cast<Derived *>(bptr);

    if (dptr ==nullptr)
    {
        cout<<"Null Pointer"<<endl;
    }
    else
    {
        cout<<"Not null"<<endl;
    }
    return 0;
}