#include<iostream>
#include <fstream>
const int SIZE =10;

using namespace std;
struct employee
{
    char Name[20];
    int ID;
};
fstream file;

void input()
{
    employee e;
    file.open("employee.dat", ios::app);
        cout << "Enter name: ";
        cin >> e.Name;
        cout << "Enter ID: ";
        cin >> e.ID;
        file.write(reinterpret_cast<char*>(&e) , sizeof(e));
    file.close();
}

void display(int data)
{
    employee e1;
    file.open("employee.dat", ios :: in);
        while(file.read(reinterpret_cast<char*>(&e1),sizeof(e1)))
        {
            if (e1.ID == data)
            {
                cout << "Name: " << e1.Name << "\t";
                cout << "ID: " << e1.ID << endl;
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
    
    int data;
    cout << "Enter ID for data retreival: ";
    cin >> data;
    
    display(data);

    return 0;
}










