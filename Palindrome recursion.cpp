#include<iostream>
using namespace std;

int palindrome(int a[],int i,int j,int n)
{

//base case
if(i==n)
    return 1;

if(a[i]!=a[n-1])
    return 0;

//recursive case
else
    return palindrome(a,i+1,j-1,n);
}


int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int num,j=n-1;
    num=palindrome(a,0,j,n);
    if(num==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
