#include<iostream>
using namespace std;
int main()
{
    int n, ans=0;
    cin>>n;
    
//Reversing a number    
 
 while(n!=0)
    {
        int remainder=n%10;
        ans=ans*10+remainder;
        n=n/10;
    }
    cout<<ans;
}
