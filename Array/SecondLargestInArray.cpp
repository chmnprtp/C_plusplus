// Write a program to find second largest in an array. take array value from user.

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int max, second_max;
    cout<<"Enter 10 array value to find second largest"<<endl;
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    
    if(arr[0]>arr[1])
    {
        max = arr[0];
        second_max = arr[1];
    }
    else
    {
        max = arr[1];
        second_max = arr[0];
    }
    
    for(int i=2; i<10; i++)
    {
        if(arr[i]>max)
        {
            second_max = max;
            max = arr[i];
        }
        
        else
        {
            if(arr[i]>second_max)
            {
                second_max = arr[i];
            }
        }
    }
    
    
    cout<<"MAX"<<max<<endl;
    cout<<"SECOND MAX"<<second_max;
}
