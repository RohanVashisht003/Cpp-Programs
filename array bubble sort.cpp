#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[1000];
//take input
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


//bubble sort
for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
    }
    cout<<arr[i]<<" ";
}


}
