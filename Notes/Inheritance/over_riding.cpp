//Illustration of overriding

#include<iostream>
using namespace std;
class parent
{
    public:
        void display()
        {
            cout<<"Parent"<<endl;
        }
};
class child : public parent
{
    public:
        void display()//same function_name repeat vayo vane last  ma vako function le aru lai override garxa
        {
            cout<<"Child"<<endl;
        }

};
int main()
{
    child c1;
    c1.display();//yo garda derived class ko display call hunxa
    c1.parent::display();//child class ko object le parent class ko display() call gareko
    //parent ko display()
}
//OUTPUT:
//Child
//Parent
