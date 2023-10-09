/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={10,9,8,2,10,2,4},i,greatest;
    //assuming first elemnet is greatest
    greatest=arr[i];
    for(i=1;i<10;i++)
    {
      if(arr[i]>greatest)
      {
        greatest=arr[i];
      }
      else if(greatest==arr[i])
      {
         greatest==arr[i];
      }
    }
    cout<<greatest;
}