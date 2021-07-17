//Illustration of need of virtual destructors
#include<iostream>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<"Constructor of abstract class(Animal class)."<<endl;
        }
        virtual void display()
        {
            cout<<"Virtual display"<<endl;
        }
               
        virtual ~Animal()
        {
            cout<<"Destructor of abstract class(Animal class)."<<endl;
        }

};
class Dog :public Animal
{
    public:
        Dog()
        {
            cout<<"Constructor of Dog class."<<endl;
        }
        
        ~Dog()
        {
            cout<<"Destructor of Dog class."<<endl;
        }

};
int main()
{
    Animal *a;//pointer to base class
    a=new Dog;//Dog ko lai memory dynamically allocate garera tyo memory ko address lai a(pointer) ma store garxa
    a->display();
    delete a;// Releases memory pointed by pointer-variable
}
//In this case, delete a garera memory free garda base class ko ra derived class ko destructor call hunxa
