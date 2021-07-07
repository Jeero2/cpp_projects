//Illustration of static data function
#include<iostream>
using namespace std;
 //static int num2 ;
class first
{
     private:
        int num1; //yo garna saath memory allocate hunxa
    
    static int num2 ;//yo garna saath memory allocate vako hudaina

     public:
         first(int x, int y)
        {
            num1 = x;
            num2 = y;
        }    

        void display()
        {
            cout<<"inputed numbers are "<<num1<<" \t"<<num2<<endl; // normal function can display both static and non static variables.

        }

        static void show()
          {
              //cout<<"value of first number \t"<<num1<<endl; // static func cannot display non static variables
              cout<<"value of second number \t"<<num2<<endl;
              
          }

};

int first::num2; // static should be declared out of class to allocate memory 

int main()
{
    first obj1(200,400);
    first obj2(300,80);
    
    obj1.display(); // obj1.num2 chahi 80 huncha kinaki num2 static variable ho

    obj1.show();

    obj2.display();

    //first::show();

}