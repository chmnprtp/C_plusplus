// Write a program to sort an array of 10 element in decending order.

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int min, second_min;
    cout<<"Enter 10 array value to sort in decending order"<<endl;
    
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    
   for(int i=0; i<10; i++)
   {
       for(int j=i+1; j<10; j++)
       {
          if(arr[i]<arr[j])
          {
              int temp;
              temp = arr[j];
              arr[j] = arr[i];
              arr[i] = temp;
          }
       }
   }
   
   cout<<"Sorted In decending Order";
   
    for(int i=0; i<10; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
    
}
