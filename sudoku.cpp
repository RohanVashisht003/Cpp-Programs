#include<iostream>
#include<cmath>
using namespace std;

bool is_numbervalid(int arr[9][9],int n, int i, int j,int number)
{
	for(int k=0; k<n; k++)
	{
		if(arr[i][k]==number || arr[k][j]==number)
		{
			return false;
		}
	}

	n=sqrt(n);
	int startrowgrid=(i/n)*n;
	int startcolgrid=(j/n)*n;

	for(int r=startrowgrid; r<n+startrowgrid; r++)
	{
		for(int c=startcolgrid; c<n+startcolgrid; c++)
		{
			if(arr[r][c]==number)
				return false;
		}
		return true;
	}
}


bool sudokucheck(int arr[9][9],int n, int i,int j)
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
		return sudokucheck(arr,n,i+1,0);
	}


	if(arr[i][j]!=0)
	{
		return sudokucheck(arr,n,i,j+1);	
	}

	for(int number=1; number<=9; number++)
	{
		if(is_numbervalid(arr,n,i,j,number))
		{
			arr[i][j]==number;
	bool kya_aagebaatbani=sudokucheck(arr,n,i,j+1);
	if(kya_aagebaatbani)
	{
		return true;
	}
	arr[i][j]=0;
	}
return false;
}
}





int main()
{
	int arr[9][9] =
{{0,0,0,2,6,0,7,0,1},
{6,8,0,0,7,0,0,9,0},
{1,9,0,0,0,4,5,0,0},
{8,2,0,1,0,0,0,4,0},
{0,0,4,6,0,2,9,0,0},
{0,5,0,0,0,3,0,2,8},
{0,0,9,3,0,0,0,7,4},
{0,4,0,0,5,0,0,3,6},
{7,0,3,0,1,8,0,0,0}};

sudokucheck(arr,9,0,0);

}