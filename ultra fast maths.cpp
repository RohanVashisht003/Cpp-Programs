#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    string s1,s2,s3;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>s1>>s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i])
        {
            s3.append("0");
        }
        else
        {
            s3.append("1");
        }

    }
    cout<<s3;
    s3="";

    }

    cout<<endl;
    }

