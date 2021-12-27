#include<iostream>
#include<math.h>
using namespace std;
const float PI = 3.14;

class Volume
{
    public:
        float volume(float l, float b, float h)
        {
            return l*b*h;
        }

        double volume(double l)
        {
            return pow(l,3);
        }

        float volume (float r)
        {
            return ( ( 4*PI ) * pow( r , 3 ) );
        }
};
int main()
{
    Volume cube , cuboid, sphere;
    cout << "The volume of cube is: " << cube.volume(2.5) << endl;
    cout << "The volume of cuboid is: " << cuboid.volume(2,2,2) << endl;
    cout << "The volume of sphere is: " << sphere.volume(2.5f) << endl;
    return 0;
}

