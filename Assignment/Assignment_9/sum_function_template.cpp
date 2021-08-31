//WAP that will find the sum and average of elements in an array using function template. 
#include<iostream>
using namespace std;
const int Max=20;
template<class T>
T calculate_sum(T arr[],int i)
{
    T sum=0;
    int j; 
   
    //Calculation of sum  
    for (j=0;j<i;j++)
    {
        sum=sum+arr[j];
    }
    return sum;
}
    

int main()
{
    int i;
    //Prompting user for size of array.
    do
    {
        cout<<"Enter size of array less than 20"<<endl;
        cin>>i;
    }
    while(i>20);
    int arr[Max]; 
    int j;   

    //Data input
    cout<<"Enter your data:"<<endl;
    for (j=0;j<i;j++)
    {
        cout<<"arr["<<j<<"]=";
        cin>>arr[j];
    } 
    
    cout<<"Sum:"<<calculate_sum<int>(arr,i);
    return 0;
} 






