#include <iostream>
#include <math.h>

using namespace std;

class Number{
    float num;

    public: 
    class error{};
    float getData()
    {
        cout << "Number: ";
        cin >> num;

        if (num <= 0) 
        {
            throw error();
        }
        else
        {
            return num;
        }
    }

    float squareRoot()
    {
        try 
        {
            return sqrt( getData() );
        }
        catch(error) 
        {
            cout << "INVALID INPUT" << endl; //yesma aba catch garda hamlai input invalid xa vanera thavayo. 
            //i.e yo case ma hamro program ko partial exception lai matrai handle garyo.
            //yo thau bata hamle getData() lai access garna khojda ako error(exception) matrai handle vayo 
            //yo invalid input le feri error dina sakxa  tesaile feri throw gareko.
            throw;
        }
    }
};

int main() 
{
    Number number;
    try 
    {
        float answer = number.squareRoot();
        cout << "Square root is:" <<answer << endl;
    }
    catch(Number:: error) {
        cout << "SQUARE ROOT OF INVALID INPUT IS NOT POSSIBLE" << endl; //yesma chai square root pani aaudaina vanera thavayo
    }

    return 0;
}