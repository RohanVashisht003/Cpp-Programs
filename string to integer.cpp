#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int string_recursive(string str)
{
    if(str.length()==1)
    {
        return (str[0]-'0');
    }

    int rem=string_recursive(str.substr(1));
    double ans=str[0]-'0';

    ans=ans*pow(10,str.length()-1)+rem;
    return int(ans);
}


int main()
{
string str;
cin>>str;
cout<<string_recursive(str);
}
