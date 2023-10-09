/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={10,9,8,2,10,2,4,20,29,78},i,smallest;
    //assuming first elemnet is smallest
    smallest=arr[i];
    for(i=1;i<10;i++)
    {
      if(arr[i]<smallest)
      {
        smallest=arr[i];
      }
      else if(smallest==arr[i])
      {
         smallest==arr[i];
      }
    }
    cout<<smallest;
    return 0;
}