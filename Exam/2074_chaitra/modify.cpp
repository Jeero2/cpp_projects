#include<iostream>
#include <fstream>
#include<string.h>
const int SIZE =3;

using namespace std;
struct employee
{
    char Name[20];
    int age;
};
fstream file;

void input()
{
    employee e;
    file.open("employee.dat", ios::app);
        cout << "Enter name: ";
        cin >> e.Name;
        cout << "Enter age: ";
        cin >> e.age;
        file.write(reinterpret_cast<char*>(&e) , sizeof(e));
    file.close();
}

void display()
{
    employee e1;
    file.open("employee.dat", ios :: in);
        while(file.read(reinterpret_cast<char*>(&e1),sizeof(e1)))
        {
            cout << "Name: " << e1.Name << "\t";
            cout << "Age: " << e1.age << endl;
        }     
        
    file.close();
}

void modify(int a)
{
    employee e2;
    file.open("employee.dat", ios::in | ios::out);
        while(!file.eof())
        {
            long position = file.tellg();
            file.read(reinterpret_cast<char*>(&e2),sizeof(e2));
            
            if (e2.age == a)     
            {
                char n[50];
                int new_age;
                cout << "Enter name: ";
                cin >> n;
                strcpy(e2.Name,n);
                cout << "Enter age: ";
                cin >> new_age;
                e2.age = new_age;
                file.seekg(position);
                file.write(reinterpret_cast<char*>(&e2) , sizeof(e2));
            }

        }
    file.close();   

}
int main()
{
    remove("employee.dat");
    for(int i = 0; i < SIZE; i++)
    {
        input();
    }
    
    display();

    char ans;
    cout << "Do you want to modify?(y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y')
    {
        int a;
        cout << "Enter age: ";
        cin >> a;
        modify(a);
        cout << "The modified entry is: " << endl;
        display();
    }
    else
    display();
    return 0;
}












