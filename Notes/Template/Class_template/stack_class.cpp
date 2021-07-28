//Illustration of use of class template to create stack to store numbers according to datatype provided during object creation. 
#include<iostream>
using namespace std;
const int MAX=20;
template <class T>//indictaes a template is being declared.
//yo garepaxi ava tala class ma T use garna payo as template. specific datatype object banauda lekhinxa.
class Stack
{
    private:
        T arr[MAX];
        int top;

    public:
    Stack()
    {
        top=-1;
    }
    void push (T data)
    {
        arr[++top]=data;
        //push vaneko value store matra garne ho 
    }
    T pop()
    {
        return arr[top--];
        //pop vaneko value hataune ho
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
    cout<<"Stack for integer datatype"<<endl;
    
    Stack<int>s1;//creates an object s1 of type class Stack to store number of type int.
    //ava T vaneko int hunxa(i.e int is template argument)
    //classname <datatype> object;
    cout<<"Size of Stack:"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"Size of Stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;//stack ko top wala value pop hunxa
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Size of Stack:"<<s1.size()<<endl;
    s1.push(44);
    cout<<"Size of Stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Size of Stack:"<<s1.size()<<endl;

    cout<<"************************************"<<endl;
    
    cout<<"Stack for float datatype"<<endl;

    Stack<float> s2;//creates an object s2 of type class Stack to store number of type float.
    //ava T vaneko float hunxa
    cout<<"Size of Stack:"<<s2.size()<<endl;
    s2.push(11.11);
    s2.push(22.22);
    s2.push(33.33);
    cout<<"Size of Stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Size of Stack:"<<s2.size()<<endl;
    s2.push(44.44);
    cout<<"Size of Stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Size of Stack:"<<s2.size()<<endl;

    return 0;
}


