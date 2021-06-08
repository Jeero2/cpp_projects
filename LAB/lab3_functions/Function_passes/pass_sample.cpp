//Sample program to demonstrate pass by value and pass by reference
#include<iostream>
using namespace std;
void functionfirst(int a)
{
    cout<<"value of a before altering:"<<a<<endl;// output:1
    a=5;
    cout<<"value of a after altering:"<<a<<endl;//output:5//because a=5 rakhda locally value change hunxa

}
void functionReference (int &b)
{
    b=20;
    cout<<"value of b after altering:"<<b<<endl;//output:20//locally change
}
int main()
{
    int a=1;
    int b=2;
    functionfirst(a);
    functionReference(b);
    cout<<"value of a in main:"<<a<<endl;//output:1//main ma change hudaina cuz functionfirst ma a=5 rakhda xuttai memory location banayera value 5 rakhxa//globally change hudaina
    cout<<"value of b in main:"<<b<<endl;//output:20//globally value change vayo cuz functionReference ma b=20 rakhda same memory location ma value change hunxa
}