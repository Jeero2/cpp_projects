//WAP to increment the value provided by object by use of second object.
#include<iostream>
using namespace std;
class Increment
{
    private:
        int num1;

    public:
        void getdata(int x)
        {
            num1=x;
        }

        Increment operator ++() //returntype operator op()
        {
            Increment temp_object;
            temp_object.num1=++num1;//temporary object use garera private gareko num1 access garyo 
            //ra ++num1 le num1 ko value increment gardinxa
            
            return temp_object; //returning object
        }

        void display()
        {
            cout<<"Incremented value: "<<num1;
        }

};
    
int main()
{
    Increment obj1,obj2;
    obj1.getdata(8);
    obj2 = ++obj1;//obj2.Increment(obj1) gareko jastai hoo
    obj2.display();
}




