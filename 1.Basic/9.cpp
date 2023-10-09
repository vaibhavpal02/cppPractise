//Optimal Approach // Second Smallest
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,4,3,6,5,9,7,8,4,2},i,smallest,secondSmallest;
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    smallest=arr[0];
    secondSmallest=-1;
    for(i=1;i<lengthArray;i++)
    {
      if(arr[i]<smallest)
      {
        secondSmallest=smallest;
        smallest=arr[i];
      }
      else if(arr[i]<smallest && arr[i]>secondSmallest)
        {
            secondSmallest=arr[i];
        }
      
    }
    cout<<secondSmallest<<endl;
    cout<<smallest;
}