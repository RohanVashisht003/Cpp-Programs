#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        //first half
         for(char j=65; j<65+n-i; j++)
         {
            cout<<j;
         }

         //second triangle
         for(char k=65+n-i-1; k>=65; k--)
         {
           cout<<k;
         }
         cout<<endl;
    }


}
