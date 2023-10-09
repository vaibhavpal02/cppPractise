/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int arr[]={1,2,3,4,5,6};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<lengthArray;i++)
    {
       cout<<arr[i]<<",";
    }
    cout<<endl;
    for(i=(lengthArray-1);i>=0;i--)
    {
       cout<<arr[i]<<",";
    }
    return 0;
    

}