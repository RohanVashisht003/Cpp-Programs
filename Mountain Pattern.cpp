#include<iostream>
using namespace std;
int main()
{
    int n,num=1;
    cin>>n;

//first half

for(int i=1; i<=n; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<j<<" ";
    }

//space in between

    for(int k=((n-i)*2)-1; k>=1; k--)
    {
        cout<<"  ";
    }

//second half

    for(int j=i; j>=1; j--)
    {
        if(j!=n)
        {
           cout<<j<<" ";
        }
    }
    cout<<endl;
}
}
