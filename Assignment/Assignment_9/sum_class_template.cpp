//WAP that will find the sum and average of elements in an array using class template. 
#include<iostream>
using namespace std;
const int Max=20;
template<class T> 
class Sum
{
    private:
        T arr[Max];
        T sum;
    public:
        int i,j;
        Sum()
        {
            sum=0;
        }
        void getData()
        {
            do
            {
                cout<<"Enter size of array less than 20"<<endl;
                cin>>i;
            }
            while(i>20);
            cout<<"Enter your data:"<<endl;
            for (j=0;j<i;j++)
            {
                cout<<"arr["<<j<<"]=";
                cin>>arr[j];
            }
        }
        T calculate_sum()
        {
            for (j=0;j<i;j++)
            {
                sum=sum+arr[j];
            }
            return sum;
        }
};
int main()
{
    Sum<int>s;
    s.getData();
    cout<<"Sum:"<<s.calculate_sum()<<endl;
    return 0;
}






