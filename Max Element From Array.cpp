#include<iostream>
using namespace std;

int main()
{
    int arr[10000];
    int n;
    int number;
    cin>>n;
    int max=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int j=0; j<n; j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }

    }
    cout<<max;


}
