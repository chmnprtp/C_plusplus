// Write a program to find second smallest in an array. take array value from user.

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int min, second_min;
    cout<<"Enter 10 array value to find second largest"<<endl;
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    
    if(arr[0]<arr[1])
    {
        min = arr[0];
        second_min = arr[1];
    }
    else
    {
        min = arr[1];
        second_min = arr[0];
    }
    
    for(int i=2; i<10; i++)
    {
        if(arr[i]<min)
        {
            second_min = min;
            min = arr[i];
        }
        
        else
        {
            if(arr[i]<second_min)
            {
                second_min = arr[i];
            }
        }
    }
    
    
    cout<<"MIn"<<min<<endl;
    cout<<"SECOND MIN"<<second_min;
}
