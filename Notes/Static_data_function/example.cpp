#include<iostream>
using namespace std;
class First
{
    int a;
    static int b;

    public:
            First(int x, int y)
            {
                a=x;
                b=y;
            }
            void show()
            {
                cout<<a<<" "<<b<<endl;
            }
            static void display()
            {
                cout<<"value of b is:"<< b<<endl;
            }
};
int First::b=0;
int main()
{
    First obj1(10,20);
    obj1.show();
    obj1.display();
    First obj2(100,200);
    obj1.show();
    obj2.display();


}