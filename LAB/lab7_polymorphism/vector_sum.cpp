// Write a program to implement vector addition using operator overloading
// using friend function


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

        void display()
        {
            cout<<"The resultant vector is :"<<first<<" , "<<second<<endl;
        }

        friend vector operator +(vector& v1, vector& v2);
};
vector operator +(vector& v1,vector& v2)
{
    vector temp;
    temp.first=v1.first+v2.first;
    temp.second=v1.second+v2.second;
    return temp;
}

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


            



