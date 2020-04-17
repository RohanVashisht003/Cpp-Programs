#include<iostream>
#include<algorithm>
using namespace std;


void sorting(int arr[], int n)
{
   sort(arr, arr+n);
}


void triplets(int arr[], int n, int target)
{
for(int i=0; i<n-2; i++)
{
    for(int j=i+1; j<n-1; j++)
    {
        for(int k=j+1; k<n; k++)
        {
            int a= arr[i];
            int b=arr[j];
            int c=arr[k];

            if(a+b+c==target)
            {
                cout<<a<<" ,"<<b<<" "<<"and"<<" "<<c<<endl;
            }
        }
    }
}
}

//main function
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
//target number
int target;
cin>>target;

sorting(arr,n);
triplets(arr,n,target);
}



