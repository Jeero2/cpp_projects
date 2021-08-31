//Stream class to both read and write from/to files.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //create fil of istream class
    fstream file;

    //opening file "createfile.txt" in out(write) mode
    file.open("createfile.txt",ios::out);

    if(!file)
    {
        cout<<"Error in creating file!!";
        return 0;
    }

    cout<<"File created successfully.";

    //closing file
    file.close();
    return 0;
}