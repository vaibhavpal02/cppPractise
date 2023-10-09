/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10],i,n,sumeven=0,sumodd=0;
  cout<<"Enter the no of variables you want to enter(less than 10):";
  cin>>n;
  cout<<"Enter the numbers"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]&1!=0)
    {
       sumodd=sumodd+arr[i];
    }else{
    sumeven=sumeven+arr[i];}
  }
  cout<<"Sum of even numbers are: "<<sumeven<<endl;
  cout<<"Sum of odd numbers are: "<<sumodd<<endl;

return 0;
}