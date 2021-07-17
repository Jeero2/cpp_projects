#include <iostream>
using namespace std;

class Base
{
    int x;
    public:
        virtual void fun() = 0;//To define a virtual function with null body (=0) is written as function body.
        //A virtual function with null body is called pure virtual function.
        //The base class having at least one pure virtual function is called abstract class. 

        int getX()
        {
            return x;
        }
};

class Derived: public Base
{
    int y;
    public:
        void fun()//mathi ko virtual void fun() function lai esle override gareko.
        //Mathi ko virtual void fun() function banauna saath ava Derived classes haru le pani fun() function 
        //banayera override garnai parxa vanne compulsion hunxa or else Derived ko pani object banauna mildaina
        //ra yo Derived pani abstract class banidinxa as virtual void fun() ta as it is inherit vako hunxa. 
        {
            cout << "Derived fun called." << endl;
        }
};

int main()
{
    // Base b;
    // b.fun(); pure virtual function banako wala class ko object banauna mildaina tara pointer chai milxa.
    //pure virtual function body empty hunxa because implementation body nai thahudaina.
    //hamle k kaam garni vanera base class wala function ma thahudaina tesaile pure abstract function banako.

    Derived d;//Override nagareko vaye yo object create garna mildaina ra function call ni garna mildaina.
    d.fun();
    return 0;
}