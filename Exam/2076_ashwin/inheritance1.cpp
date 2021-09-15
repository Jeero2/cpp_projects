#include<iostream>
using namespace std;

class Theory
{
    public:
        int maths, chemistry, english;
        void Theory_marks(int marks1, int marks2, int marks3)
        {
            maths = marks1;
            chemistry = marks2;
            english =marks3;
        }
};

class Practical
{
    public:
        int physics, drawing;
        void Practical_marks(int marks1, int marks2)
        {
            physics = marks1;
            drawing = marks2;
        }
};

class Marks_Total : public Theory, public Practical
{
    public:
    void display()
    {
        int Marks = maths + chemistry + english + physics + drawing;
        cout << "Total: " << Marks;
    }
};


int main()
{
    Marks_Total t;
    t.Theory_marks(2,2,2);
    t.Practical_marks(2,2);
    t.display();
    return 0;
}
