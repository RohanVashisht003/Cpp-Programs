#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    while(sum>=0)
    {
        cin>>n;
//Calculate cumulative sum        
        sum=sum+n;
        
//Print numbers until sum is positive or zero        
        if(sum>=0)
        {
            cout<<n<<endl;
        }
    }
}
