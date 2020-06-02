#include<iostream>
#include<cmath>
using namespace std;

bool numbercheck(int arr[][9],int i,int j,int n,int number)
{
    for(int k=0; k<n; k++)
    {
        if(arr[i][k]==number || arr[k][j]==number)
        {
            return false;
        }
    }
    //grid
    n=sqrt(n);
    int startrowgrid=(i/n)*n;
    int startcolgrid=(j/n)*n;

    for(int p=startrowgrid; p<startrowgrid+n; p++)
    {
        for(int q=startcolgrid; q<startcolgrid+n; q++)
        {
            if(arr[p][q]==number)
            {
                return false;
            }
        }
    }
    return true;
    }






bool sudokusolve(int arr[][9],int i,int j,int n)
{
    if(i==n)
    {
        for(int row=0; row<n; row++)
        {
            for(int col=0; col<n; col++)
            {
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if(j==n)
    {
        return sudokusolve(arr,i+1,0,n);
    }

    if(arr[i][j]!=0)
    {
        return sudokusolve(arr,i,j+1,n);
    }

    for(int number=1; number<=9; number++)
    {
        if(numbercheck(arr,i,j,n,number))
        {
            arr[i][j]=number;
            bool backtracking=sudokusolve(arr,i,j+1,n);
            if(backtracking)
            {
                return true;
            }

                arr[i][j]=0;
        }
    }
    return false;
}




int main()
{
    int arr[9][9] ;
int n;
cin>>n;

for(int i=0; i<9; i++)
{
	for(int j=0; j<9; j++)
	{
		cin>>arr[i][j];
	}
}
sudokusolve(arr,0,0,9);
return 0;
}
