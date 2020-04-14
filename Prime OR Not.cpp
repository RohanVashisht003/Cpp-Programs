#include<iostream>
using namespace std;

int main()
{
int n,counter=0;
cin>>n;

for(int i=1; i<=n; i++)
{
  if(n%i==0)
  {
      counter++;
  }
}

if(counter==2)
{
    cout<<"Prime";
}
else
{
cout<<"Not Prime";
}
}

