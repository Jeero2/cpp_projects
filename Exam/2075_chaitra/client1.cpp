#include<iostream>
#include <fstream>
using namespace std;

class C
{
    public:
    struct Client
    {
        int client_ID;
        char client_name[20];
    };
    fstream file;

    void get_info()
    {  
        Client c;
        
        file.open("client1.dat" , ios :: out);
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
        
        file.open("client1.dat", ios::ate |  ios::binary);
        cout << "Total clients: " << file.tellg()/sizeof(Client) << endl;
        file.close(); 

    }
    void add()
    {
        char ans;
        Client c2;
        cout << "Do you want to add(Y/N): " << endl;
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
        {
            file.open("client1.dat" , ios :: app);
            int n;
            cout << "Enter the no. of details you want to add: " <<endl;
            cin >> n; 
            for(int i = 0; i < n; i++)
            {
                get_info();
                file.write(reinterpret_cast<char*>(&c2) , sizeof(c2));
            } 

            file.close();
        }
    }       

};

int main()
{
    C a;
    a.get_info();
    a.add();
    a.display();
    a.total();
    return 0; 
}

