//Illustration of this pointer variable
#include<iostream>
using namespace std;
class mobile
{
    int m=10;
    public:
        void display()
        {
            cout<<"this->m= "<<this->m<<endl;// m1.display() garda this le m1 ko address lai point garirahuncha ani m2.display garda m2 ko address 
            cout<<"m= "<<m<<endl;// yesma ni compiler le this keyword  bydefault generate garxa ,  mathi ko ra yo statement same ho
            cout<<this<<endl;// this le address lai point garxa

        }
};
int main()
{
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0; 

}

 