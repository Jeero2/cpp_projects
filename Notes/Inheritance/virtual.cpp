//Use of virtual keyword to overcome ambiguity.
#include<iostream>
using namespace std;
class parent_A
{
    public:
        void display()
        {
            cout<<"Parent"<<endl;
        }
};
//class child_B: public parent_A
//yo virtual use nagarda void display() wala function child_B ko through bata pani child_D le inherit garxa.
//So, obj1.display() garda ambigous vanera error handinxa because compiler confuse hunxa path ABD use garne ki path ACD. 

//virtual keyword use garyo vane chai void display() wala function child_B ko through bata child_D le inherit gardaina.
//So, ambiguous error handaina.
class child_B: public virtual parent_A
{
    public:
        void display_B()
        {
            cout<<"Child_B"<<endl;
        }
};
class child_C: public virtual parent_A
{
    public:
        void display_C()
        {
            cout<<"Child_C"<<endl;
        }
};
class child_D : public child_B, public child_C
{
    public:
        void display_D()
        {
            cout<<"Child_D"<<endl;
        }
};

int main()
{
    child_D obj1;
    obj1.display();
    return 0;
}
