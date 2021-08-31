#include<iostream>
using namespace std;
  
template<class T, class U=int >
class A
{
    public:
        T x;
        U y;
};
  
int main()
{
    A<char,char> a;
    A<int> c;
    cout << sizeof(a) << endl;
    //A<> b;  esto garna mildaina 
    //cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    return 0;
}