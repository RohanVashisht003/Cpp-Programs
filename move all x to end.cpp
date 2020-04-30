#include<iostream>
#include<cstring>
using namespace std;

void shift(char *str,int i,int l)
{
    if(i>=l)
    {
        return;
    }
    char c=str[i];
    if(c!='x')
    {
        cout<<c;
    }
    shift(str,i+1,l);
    if(c=='x')
    {
        cout<<c;
    }
    return;
}


int main()
{
    char str[1000];
    cin>>str;
    int l=strlen(str);
    shift(str,0,l);
}
