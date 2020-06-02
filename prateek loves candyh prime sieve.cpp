#include<iostream>
using namespace std;
#include<vector>
#define MAX 10000000
vector <bool> prime(MAX,true);
int primearray[10000000];
void generateprimes()
{
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=MAX; i++)
    {
        if(prime[i])
        {
            for(int j=i; j*i<=MAX; j++)
            {
                prime[i*j]=false;
            }
        }
    }
    int idx=1;
    primearray[0]=2;

    for(int i=3; i<=MAX; i=i+2)
    {
        if(prime[i])
        {
            primearray[idx++]=i;
        }
    }
}


int main()
{
    generateprimes();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<primearray[n-1]<<endl;
    }
}
