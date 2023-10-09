/*Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lengthArray,i;
    cout<<"Enter size of Array";
    int arr[lengthArray],arr2[lengthArray];
    for(i=0;i<lengthArray;i++)
    {
      cin>>arr[i];
      arr2[i]=arr[i];
    }
    for(i=0;i<lengthArray;i++)
    {
        cout<<arr2[i];
    }
    return 0;
}*/

/*Error because in C++ we can't declare variable length array for that we need dynamic 
array USING NEW KEYWORD OR VECTOR OK*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lengthArray=5,i;
    cout<<"Enter "<<lengthArray<<" elements"<<endl;
    int arr[lengthArray],arr2[lengthArray];
    for(i=0;i<lengthArray;i++)
    {
      cin>>arr[i];
      arr2[i]=arr[i];
    }
    cout<<"[";
    for(i=0;i<lengthArray;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<"]";
    return 0;
}


