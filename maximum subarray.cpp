#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int testcases;
    cin>>testcases;

    for(int testcasehai=1; testcasehai<=testcases; testcasehai++)
    {
    int n;
    cin>>n;
    int arr[1000];
    int sum[1000];

//input lene k liye
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        if(i==0)
            sum[i]=arr[i];
        else
            sum[i]=sum[i-1]+arr[i];
        }


int max=INT_MIN,cursum=arr[0];
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                cursum=sum[j]-sum[i-1];
            if(cursum>max)
            {
                max=cursum;
            }
        }
    }
     cout<<max<<endl;
}
}

