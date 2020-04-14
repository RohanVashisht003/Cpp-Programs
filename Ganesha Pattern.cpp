#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

//first component
    cout<<"*";
for(int space=1; space<=(n-3)/2; space++)
{
    cout<<" ";
}

for(int star=1; star<=(n+1)/2; star++)
{
    cout<<"*";
}
cout<<endl;


//second component
for(int star=1; star<=(n-3)/2; star++)
{
    cout<<"*";

for(int space=1; space<=(n-3)/2; space++)
{
    cout<<" ";
}
cout<<"*"<<endl;
}


//third component
for(int star=1; star<=n; star++)
{
    cout<<"*";
}
cout<<endl;


//fourth component
for(int rows=1; rows<=(n-3)/2; rows++)
{
for(int space=1; space<=(n-3)/2+1; space++)
{
    cout<<" ";
}
cout<<"*";
for(int space=1; space<=(n-3)/2; space++)
{
    cout<<" ";
}
cout<<"*"<<endl;
}


//fifth component
for(int star=1; star<=(n+1)/2; star++)
{
    cout<<"*";
}
for(int space=1; space<=(n-3)/2; space++)
{
    cout<<" ";
}
cout<<"*";
}
