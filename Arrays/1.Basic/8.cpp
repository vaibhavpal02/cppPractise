//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,4,3,6,5,9,7,8,4,2},i,largest,secondLargest;
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    largest=arr[0];
    secondLargest=-1;
    for(i=1;i<lengthArray;i++)
    {
      if(arr[i]>largest)
      {
        secondLargest=largest;
        largest=arr[i];
      }
      else if(arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest=arr[i];
        }
      
    }
    cout<<secondLargest<<endl;
    cout<<largest;
}
//Brute: Sorting

/*Better Approach

 #include<bits/stdc++.h>
 using namespace std;
int main()
 {
     int arr[]={3,3,3,2,3,3},i,largest,secondLargest;
     int lengthArray=sizeof(arr)/sizeof(arr[0]);
     largest=arr[0];
     for(i=1;i<lengthArray;i++)
     {
      if(arr[i]>largest)
      {
        largest=arr[i];
   
      }
    } 
     for(i=0;i<lengthArray;i++)
       {
         if(arr[i]!=largest && arr[i]>secondLargest)
         {
           secondLargest=arr[i];
         }
       }
     cout<<secondLargest<<endl;
     cout<<largest;
}*/
