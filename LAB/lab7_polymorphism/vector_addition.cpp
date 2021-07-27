// Write a program to implement vector addition using operator overloading
// without using friend function


#include<iostream>
using namespace std;

class vector
{
    private:
        float first,second;
    
    public:
        vector()
        {
            first=0;
            second=0;
        }

        void getData()
        {
            float f,s;
            cout<<"Enter first component of  vector"<<endl;
            cin>>f;
            cout<<"Enter second component of vector"<<endl;
            cin>>s;
            cout<<"You entered:"<<f<<" , "<<s<<endl;
            first=f;
            second=s;
        }

        vector operator +(vector v)
        {
            vector temp;
            temp.first=first+v.first;
            temp.second=second+v.second;
            return temp;
        }
        void display()
        {
            cout<<"The resultant vector is :"<<first<<" , "<<second<<endl;
        }
};

int main()
{
    vector V1,V2,V3;
    cout<<"Enter the components of two vector as asked."<<endl;
    V1.getData();
    V2.getData();
    V3=V1+V2;
    V3.display();
    return 0;
}


            



