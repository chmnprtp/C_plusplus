//Write a program to calculate the sum of numbers stored in array of size 10.
// take array values from the user.

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum=0;
    
    cout<<"Enter the 10 number to add in array";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    
    
    for(int i=0; i<10; i++)
    {
        sum += arr[i];
    }
    
    cout<<"Total sum of array is "<<sum;
    
}
