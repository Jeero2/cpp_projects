#include<iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;
int main()
{
    char data[15];

    ofstream data_input;
         data_input.open ("copy.dat");

            if (!data_input)
            {
                cout << "Error in opening file." << endl;
            }

            cout << "Enter string:" << endl;
            // getline( cin, data);
            cin.getline(data,15);
            data_input << data << endl;
    data_input.close();
        

    ofstream data_output;
        ifstream data_read;
            data_read.open ("copy.dat");
            data_output.open ("paste.dat");
                if (!data_read)
                {
                    cout << "Error in opening file." <<endl;
                    exit(1);
                }
                if (!data_output)
                {
                    cout << "Error in opening file." <<endl;
                    exit(1);
                }

                char c;
                while (!data_read.eof())
                {
                    data_read.get(c);
                    if (islower(c))
                    {
                        c = toupper(c);//single character matra read garxa
                    }
                    else
                    {
                        c = tolower(c);
                    }

                    data_output << c;
                }

                // int i=0;
                // while (data[i] != '\0')
                // {
                //     if (data[i] >= 'a' && data[i] <= 'z')
                //     {
                //         data[i]-=32;
                //     }
                // }
                data_read.close();
            data_output.close();
    return 0;
}






    


