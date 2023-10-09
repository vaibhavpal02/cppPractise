/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10],i,n,sum=0;
  cout<<"Enter the no of variables you want to enter(less than 10):";
  cin>>n;
  cout<<"Enter the numbers"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    sum=sum+arr[i];
  }
  cout<<"Sum is "<<sum<<endl;

return 0;
}