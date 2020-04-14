#include<iostream>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;

    for(int i=1; i<=n1; i++)
    {
        int ans=(3*i)+2;
        if(ans%n2!=0)
        {
            cout<<ans<<endl;

        }
        else
        {
         n1++;
        }


    }
}
