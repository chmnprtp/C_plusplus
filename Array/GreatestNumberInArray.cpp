//Write a program to calculate the greatest number stored in an array of size 10. 
//Take array values from the user.


#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int grt=0;
    
    cout<<"Enter the 10 number to find Greatest element in array";
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        if(arr[i]>grt)
        {
            grt = arr[i];
        }
    }
    
  
    cout<<"Greatest number in array is "<<grt<<endl;
  
    
}
