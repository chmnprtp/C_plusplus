//Write a program to sort elements of an array of size 10. 
//Take array values from the user.


#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter the 10 number to sort elements in array";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    
  
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] =temp;
            }
            
        }
  
    }
    
    cout<<"Sorted array"<<endl;
    
    for(int i=0; i<10; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
}
