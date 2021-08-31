//Illustration of use of default arguement with class template
#include <iostream>
using namespace std;

template<class T1 = int, class T2 = int>

class test {
    private:
        T1 a;
        T2 b;
    public:
        test(T1 n1, T2 n2) {
            a = n1;
            b = n2;
        }

        void display() {
            cout << "Data: " << a << " and " << b <<endl;
        }
};

int main() {
    test <int, float> obj (5, 7.39);
    test <int> obj1 (5, 7.39);
    test <> obj2 (5,'a');
    obj.display();
    obj1.display();
    obj2.display();
    return 0;
}