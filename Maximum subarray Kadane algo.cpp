#include<iostream>
using namespace std;

int main()
{
    int n;
cin>>n;

    for(int testcase=1; testcase<=n; testcase++)
    {int n1;
        cin>>n1;
        int arr[10000];
        for(int i=0; i<n1; i++)
        {
           cin>>arr[i];
        }

//kadane"s algo
    int cs=0,ms=0;
    for(int j=0; j<n1; j++)
    {
        cs=cs+arr[j];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<ms<<endl;
    }
}
