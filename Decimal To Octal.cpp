#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int rem=0;
    int i=1;
    while(n!=0)
    {
         rem=n%8;
        ans=ans+rem*i;
      i=i*10;
        n=n/8;

    }
    cout<<ans;

}
