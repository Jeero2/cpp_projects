#include<iostream>
#include <fstream>
using namespace std;
struct Client
{
    int client_ID;
    char client_name[20];
};
fstream file;

void get_info()
{  
    Client c;
    remove("client1.dat");
    
    file.open("client1.dat" , ios :: app);
        int n;
        cout << "Enter the no. of details you want to add: " <<endl;
        cin >> n; 
        for(int i = 0; i < n; i++)
        {
            cout << "Enter client_ID: " << endl;
            cin >> c.client_ID;
            cout << "Enter client name: " << endl;
            cin >> c.client_name; 
            file.write(reinterpret_cast<char*>(&c) , sizeof(c));
        } 
    file.close();                    
            
}

void display()
{
    Client c1;
    cout << "Displaying info" << endl;

    file.open("client1.dat" , ios::in);
        while(file.read(reinterpret_cast<char*>(&c1),sizeof(c1)))        
        {
            cout << "Client_ID: " << c1.client_ID << endl;
            cout << "Client name: " << c1.client_name << endl;
        }
    file.close(); 
    
}

void total()
{
    
    file.open("client1.dat", ios::in | ios::ate);
    cout << "Total clients: " << file.tellg()/sizeof(Client) << endl;
    file.close(); 

}

int main()
{

    get_info();
    display();
    total();
    return 0; 
}

