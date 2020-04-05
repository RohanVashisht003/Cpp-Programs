#include<iostream>
using namespace std;

int main()
{
int n,arr[10000];
cin>>n;
//input from user
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

//take key as input
int key;
cin>>key;

//Find key in array
for(int j=0; j<n; j++)
{
   if(arr[j]==key)
   {
       cout<<"Key Found At Index"<<j;
   }
}
cout<<"Key Not Found";
}
