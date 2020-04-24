#include<iostream>
#include<algorithm>
using namespace std;

void intersection(int arr1[], int arr2[],int arr3[],int n,int k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr1[i]==arr2[j])
            {
              arr3[k]=arr1[i];
              k++;
              arr2[j]=INT_MIN;
              break;
            }
        }
    }

   sort(arr3,arr3+k);
   cout<<"[";
   for(int i=0; i<k; i++)
   {
       if(i==0)
        cout<<arr3[i];
       else
       cout<<","<<" "<<arr3[i];
   }
   cout<<"]";
}




int main()
{
    int n,k=0;
    cin>>n;
    int arr1[1000];
    int arr2[1000];
    int arr3[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }

    intersection(arr1,arr2,arr3,n,k);
}
