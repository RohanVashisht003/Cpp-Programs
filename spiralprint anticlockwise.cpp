#include<iostream>
using namespace std;

void spiral(int arr[100][100],int row, int col)
{
    int sc=0,ec=col-1,sr=0,er=row-1;
    int i=0;

    while(i<=col*row)
    {

    //1
        for(int j=sr; j<=er; j++)
        {
            cout<<arr[j][sc]<<" ";
            i++;
        }
        sc++;

        if(i>=row*col){
			break;
        }

    //2
        for(int j=sc; j<=ec; j++)
        {
            cout<<arr[er][j]<<" ";
            i++;
        }
        er--;
        if(i>=row*col){
			break;
        }

    //3
        for(int j=er; j>=sr; j--)
        {
            cout<<arr[j][ec]<<" ";
            i++;
        }
        ec--;

        if(i>=row*col){
			break;
        }
    //4
        for(int j=ec; j>=sc; j--)
        {
            cout<<arr[sr][j]<<" ";
            i++;
        }
        sr++;



}
 cout<<"END";
}




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

spiral(arr,row,col);
}


