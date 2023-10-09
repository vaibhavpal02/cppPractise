/*Bubble sort:
[10,8,9,3,2]
Outer loop is for pass=(n-1)
inner loop is for swap=(n-1) but after one pass last element sorted so 
optimised=(n-1-(1))

Optimsed Bubble Sort:
if there are n elements in the array we know that the outer loop will run (n-1) times ok,
fine but why if the array sorted earlier in two passes but you hve n elements so your loop
has tow work more,
[solution:]

we can take any variable that will tell whether the swapping is done in inner loop or not
if it stops then it clearly saw that the array is sorted hence,not need to compare further
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,4,3,6,5,9,7,8,8,4,2},i,j,flag=0,temp;
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    //cout<<lengthArray;
    for(i=0;i<lengthArray;i++)
    { 
        flag=0;
        for(j=0;j<lengthArray-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flag=1;
            }
        }
        if(flag==0)
        {
           break;
        }
    }
    cout<<"Sorted Array:";
    cout<<"[";
    for(i=0;i<lengthArray;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]";
    return 0;
}

