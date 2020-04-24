#include<iostream>
using namespace std;

void binary(int arr[],int n, int m)
{
    int s=0,e=n-1;

    while(s<=e)
    {
     int  mid=(s+e)/2;
    if(m<arr[mid])
    {
        e=mid-1;
    }
    else if(arr[mid]==m)
    {
      cout<<mid;
      break;
    }
    else
    {
      s=mid+1;
    }
    }

    if(s>e)
    {
        cout<<"-1";
    }
}




int main()
{
    int n,m;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    binary(arr,n,m);
}

