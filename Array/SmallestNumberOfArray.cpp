//Write a program to find smallest number stored in an array of size 10. 
//Take array values from the user.


#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[10];
    int sml=INT_MAX;
    
    cout<<"Enter the 10 number to find Smallest element in array";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        if(arr[i]<sml)
        {
            sml = arr[i];
        }
    }
    
  
    cout<<"Smallest number in array is "<<sml<<endl;
  
    
}
