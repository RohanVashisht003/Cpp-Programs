 #include<iostream>
using namespace std;
int main()
{
	int n;
	int col,row,space;
    cin>>n;
    for(row=1; row<=n; row++)
    {
//starting spaces
    	for(space=1; space<=n-row; space++)
    	{
    		cout<<" ";
    	}
// First and nth row
 			if(row==1 || row==n)
 			{
 				for(col=1; col<=n; col++)
 				{
 					cout<<"*";
 				}
 			}
// other rows
 			else
 			{
 // for first and nth column
                for(col=1; col<=n; col++)
                {
                    if(col==1 || col==n)
 				{
 					cout<<"*";
 				}
 				    else
 				{
 //spacing in middle
 					for(col=1; col<=n-2; col++)
 					{
 						cout<<" ";
 					}
 				}
                }
 			}
cout<<endl;
 		}


    }

