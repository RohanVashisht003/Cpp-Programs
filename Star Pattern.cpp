#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
// left straight triangle
      for(int j=1; j<=i; j++)
      {
          cout<<"*";
      }
//spacing
      cout<<" ";
//left reversed triangle
      for(int j=n; j>=i; j--)
      {
          cout<<"*";
      }

     for(int j=n; j>=i; j--)
     {
         cout<<"*";
     }

     cout<<" ";

     for(int j=0; j<i; j++)
     {
         cout<<"*";
     }
      cout<<endl;
  }
}
