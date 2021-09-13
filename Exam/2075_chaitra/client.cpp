#include <iostream>
#include <fstream>
#include <string.h>
const int MAX = 30;

using namespace std;
struct client
{
    int Client_ID;
    int Account_ID;
    char Name[MAX];
    char Address[MAX];
    int Age;

    client(){};

    client(int client_id, int account_id, char* name, char* address, float age)
    {
        this -> Client_ID = client_id;
        Account_ID = account_id;
        strcpy( Name, name); //since Name=name garna mildaina.
        strcpy( Address, address);
        Age = age;
    }
};

int main()
{
    remove("client.dat");

    client c1( 1, 1200, "Jeshika", "Tripureshwor", 20);
    client c2( 2, 4500, "Jenisha", "Teku", 25);

    ofstream outfile;
    outfile.open("client.dat", ios::app | ios::binary |ios::out);
    outfile.write(reinterpret_cast<char*>(&c1), sizeof(client));
    outfile.write(reinterpret_cast<char*>(&c2), sizeof(client));

    outfile.close();

    ifstream infile;
    infile.open("client.dat", ios::binary);
    client c3;

    int c=1;
    
    // do
    // {
    //     cout << "Enter client_ID for retrieving info: " << endl;
    //     cin >> c;
    // }while(c<1 || c>2);

    while(infile.read(reinterpret_cast<char*>(&c3) , sizeof(client)))
    {
        if (c3.Client_ID == c)
        {
            cout << "Client_ID: " << c3.Client_ID <<endl
                << "Account_ID: " << c3.Account_ID <<endl
                << "Name: " << c3.Name <<endl
                << "Address: " << c3.Address << endl
                << "Age: " << c3.Age <<endl;
        }
        
    }      

    infile.close();

    ifstream file("client.dat", ios::ate|ios::binary);
    cout << "Total clients: " << file.tellg() / sizeof(client) << endl;   
    file.close();
    return 0;
}
    



    



