#include<iostream>
using namespace std;



void merge(int arr[],int arr2[], int arr3[],int n)
{
    int k=0;
    int i=0; //first index of arr
    int j=0; //first index of arr2

    while(i<=n-1 && j<=n-1)
    {
        if(arr[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }

        else
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }
    }
        while(i<=n-1)
        {
            arr3[k]=arr[i];
            i++;
            k++;
        }


        while(j<=n-1)
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }


}


void median(int arr3[],int siz)
{
    int med=((siz+1)/2)-1;
    cout<<arr3[med];
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    int arr3[n+n];
    int siz=sizeof(arr3)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }

     merge(arr,arr2,arr3,n);
     median(arr3,siz);

}


