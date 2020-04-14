#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=n; row>=1; row--)
    {
        for(int num=1; num<=row; num++)
        {
            cout<<num<<" ";
        }

        for(int j=0; j<2*(n-row)-1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
