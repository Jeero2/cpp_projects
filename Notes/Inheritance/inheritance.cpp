//Illustration of inheritance
#include<iostream>
using namespace std;
class Animal //parent class or base class
{
    public:
        void eat()
        {
            cout<<"Eating.."<<endl;
        }
};
    class Dog: public Animal //child class or derived class 
    //Syntax: class child_class : access_specifier parent_class
    {
        public:
            void bark()
            {
                cout<<"Barking..."<<endl;
            }
            //Derived class le base class ko features haru inherit garxa plus additional features ni hunxa

    };

            
int main(void)
{
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
}
//Publicly inherit garda derived class ko object le saav access pauxa.
//privately access garda-> parent class ko public members or methods becomes private members of child class.
//so,child class ko object le tyo private methods access garna paudaina 