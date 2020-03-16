#include<iostream>
using namespace std;
int main()
{
char c;
cin>>c;
if(c>='a'&& c<='z')
{
cout<<"lowercase";
}
else if(c>='A'&& c<='Z')
{
    cout<<"UPPERCASE";
}
else
{
cout<<"Invalid";
}
}
