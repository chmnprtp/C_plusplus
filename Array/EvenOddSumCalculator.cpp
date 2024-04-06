//Write a program to calculate the sum of all even numbers and sum of all odd numbers
//which are stored in an array of size 10. Take array values from the user.


#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int sumEven=0;
    int sumOdd=0;
    int even=0;
    int odd=0;
    
    cout<<"Enter the 10 number to calculate even or odd number of array element";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    
  
    cout<<"Total of even numbers "<<sumEven<<endl;
    cout<<"Total of odd numbers "<<sumOdd;
    
}
