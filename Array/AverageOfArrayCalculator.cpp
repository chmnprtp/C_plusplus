//Write a program to calculate the average of numbers stored in an array of size 10. 
//Take array values from the user.


#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    float avg;
    int sum=0;
    
    cout<<"Enter the 10 number to calculate average of array element";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        sum  += arr[i];
    }
    
    avg = sum / 10.0;
  
    cout<<"Total avg of array is "<<avg;
    
}
