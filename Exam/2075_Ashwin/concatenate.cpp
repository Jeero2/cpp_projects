#include<iostream>
#include <string.h>

using namespace std;
class String
{
    private:
        char s[50];
    public:

        String()
        {
            cout << "Enter string: ";
            cin.getline(s, 50);
        }
        
        
        void operator + (String &obj)
        {            
            cout << "Concatenated string: " << strcat(s,obj.s);            
        }
            
};


int main()
{
    String s1;
    String s2;
    s1+s2;
    return 0;
}