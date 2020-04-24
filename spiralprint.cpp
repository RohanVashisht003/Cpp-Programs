#include<iostream>
using namespace std;

int main()
{
    int row,col;
     cin>>row>>col;
    int arr[100][100];


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    int element=0;
    int sr=0,er=row-1,sc=0,ec=col-1;

    while(element<row*col)
    {
   //1
        for(int i=sc; i<=ec; i++)
        {
            cout<<arr[sr][i]<<" ";
            element++;
        }
        sr++;
        if(element>=row*col)
			break;
   //2
        for(int i=sr; i<=er; i++)
        {
            cout<<arr[i][ec]<<" ";
            element++;
        }
        ec--;
        if(element>=row*col)
			break;
  //3
        for(int i=ec; i>=sc; i--)
        {
            cout<<arr[er][i]<<" ";
            element++;
        }
        er--;

        if(element>=row*col)
			break;
   //4
        for(int i=er; i>=sr; i--)
        {
            cout<<arr[i][sc]<<" ";
            element++;
        }
        sc++;

    }
    return 0;
}
