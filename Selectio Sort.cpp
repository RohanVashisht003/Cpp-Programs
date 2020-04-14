#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[10000];
    cin>>n;

//take input numbers
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

  for(int i=0; i<n-1; i++)
  {
      int smallest=i;

//find smallest
      for(int j=i+1; j<n; j++)
      {
          if(arr[smallest]>arr[j])
          {
              smallest=j;
          }
      }
      swap(arr[smallest],arr[i]);
  }

  for(int i=0; i<n; i++)
  {
      cout<<arr[i]<<" ";
  }
  }


