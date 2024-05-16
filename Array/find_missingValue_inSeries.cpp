//using linearSearch approach

#include<iostream>
using namespace std;

int main()
{
    int i=0;
    int n;
    cout<<"Enter number of array"<<endl;
    cin>>n;
    int arr[n];
    int diff;
   
    cout<<"Enter"<<n<< "array element"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    diff = (arr[n-1] - arr[0])/n;
    // cout<<"value of diff "<<diff;
    
  
  for(i=0; i<n-1; i++)
  {
      if(arr[i+1]-arr[i]!= diff)
      {
          cout<<"Missing value:"<< arr[i] + diff;
      }
  }
  
//   cout<<"No Missing value";
   
}
