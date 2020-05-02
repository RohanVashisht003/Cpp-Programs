#include<iostream>
using namespace std;

void rotate90(int arr[][10],int n)
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<=n-1; j++)
            {
                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }

}




int main()
{
    int n;
    cin>>n;
    int arr[10][10];
    for(int i=0; i<=n-1; i++)
    {
     for(int j=0; j<=n-1; j++)
     {
          cin>>arr[i][j];
     }
    }

    rotate90(arr,n);
    }

