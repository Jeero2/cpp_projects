#include<iostream>
using namespace std;
class Animal
{
    public:
        virtual void move()=0;
        void  eat()
        {
            cout<<"Eat of Animal class."<<endl;
        }
        Animal()//yo constructor Dog le inherit garxa ra Dog ko object banepaxi afai call hunxa.
        {
            cout<<"Constructor of abstract class(Animal class)."<<endl;
        }

};
class Dog :public Animal
{
    public:
        void move()
        {
            cout<<"Dog moves with four legs."<<endl;
        }

};
int main()
{
    Animal *animal;
    Dog d;
    d.move();
    animal->eat();//abstract class ko object banauna mildaina so pointer bata methods access garnu parxa.
}