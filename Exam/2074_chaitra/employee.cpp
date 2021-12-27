#include<iostream>
#include <fstream>
const int SIZE =10;

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
int main()
{
    remove("employee.dat");
    for(int i = 0; i < SIZE; i++)
    {
        input();
    }
    
    display();
    return 0;
}










// struct employee
// {
//     char Name[20];
//     int age;
// }e[10];    

// int main()
// {
//     ofstream outfile("employee.dat", ios::out);
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         cout << "Name:" <<endl;
//         cin >> e[i].Name;
//         cout << "Age: "<< endl;
//         cin >> e[i].age;
//         outfile.write(reinterpret_cast<char*>(&e[i]), sizeof(employee));
//     }
//     outfile.close();

//     cout << "Retrieving data: " <<endl;
//     ifstream infile ("employee.dat", ios :: in);
//     employee e1;
//     for (i=0;i<10;i++)
//     {
//         while (!infile.eof())
//         {
//             infile >> e[i].Name;
//             cout << "Name: "<< e[i].Name;
//             infile >> e[i].age;
//             cout << "Age: " <<e[i].age;
//         }

//     }
// }


