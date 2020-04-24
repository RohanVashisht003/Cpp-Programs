#include<iostream>
using namespace std;


void waveprint(int a[100][100],int row, int col )
{
   for(int i=0; i<col; i++)
   {
       if(i%2==0)
       {
           for(int j=0; j<row; j++)
           {
               cout<<a[j][i]<<", ";
           }
       }
       else
       {
            for(int j=row-1; j>=0; j--)
            {
                cout<<a[j][i]<<", ";
            }
       }
   }
   cout<<"END";
}



int main()
{
    int row,col;
    cin>>row>>col;
    int a[100][100];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    waveprint(a,row,col);
}
