#include<iostream>
using namespace std;

int main()
{
int n;
int flag=1;
cin>>n;
for(int i=2; i<=n/2; i++)
{
    if(n%i==0)
    {
        flag=0;
    }
}

if(flag==1)
{
    cout<<"number is prime";
}
else
    {
    cout<<"number is not prime";
}
}
