//WAP a program to overload * operator to multiply two  3x3 matrix.
#include<iostream>
using namespace std;

class Matrix
{
    public:
        double matrix[3][3],matrix_product[3][3],sum=0;
        int i,j,k;
    void input()
    {
        cout << "Enter values of matrix:" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "matrix" <<"[" << i << "]" << "[" << j << "]" << "= ";
                cin >> matrix[i][j];
            }
        }
    }  

    Matrix operator *(Matrix temp)
    {
        Matrix matrix_obj;
        for (i = 0 ;i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    sum+= matrix[i][k] * temp.matrix[k][j];

                }
                matrix_obj.matrix_product[i][j] = sum;
                sum = 0;
                  
            }
        }
        return matrix_obj;
    }
    void display()
    {
        for (i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                cout << matrix_product[i][j] << "  ";
            }
            cout << "\n";
        }
                
    }  
};
                
int main()
{
    Matrix matrix_1,matrix_2,matrix_3;
    matrix_1.input();
    matrix_2.input();
    matrix_3 = matrix_1*matrix_2;
    cout << "Product:" << endl;
    matrix_3.display();
}
        


