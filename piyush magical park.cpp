#include<iostream>
using namespace std;

void piyush(char arr[][100],int n,int m,int k, int s)
{
    bool success = true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char ch=arr[i][j];
                if(s<k)
                {
                    success= false;
                    break;
                }

                if(ch=='.')
                {
                    s=s-2;
                }

               else if(ch=='*')
                {
                    s=s+5;
                }

                else
                {
                    break;
                }

                if(j!=n-1)
                {
                    s--;
                }
            }
        }

    if(success)
    {
        cout<<"yes"<<endl;
        cout<<s;
    }
    else{
        cout<<"no"<<endl;

    }
}


int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    piyush(arr,n,m,k,s);
}
