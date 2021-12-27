#include<iostream>
using namespace std;

class Distance
{
    private:
        float d;
    public:
        Distance(float d)
        {
            this->d = d;
        }

        Distance()
        {
            d = 0;
        }

        Distance operator ++ ()
        {
            return d++;
        }

        Distance operator -- ()
        {
            return d--;
        }
        void display()
        {
            cout << d <<endl;
        }
};

int main()
{
    Distance d1;
    Distance d2(20);
    float value;
    ++d1;
    --d2;
    d1.display();
    d2.display();
    return 0;
}