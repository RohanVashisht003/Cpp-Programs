#include<iostream>
using namespace std;
int main()
{
//Take input from user
    int binarynumber,n;
    cin>>n;


    for (int i=1; i<=n; i++)
    {
        cin>>binarynumber;
        int decimal=0,base=1,remainder=0;

//converting from binary to decimal
    while(binarynumber>0)
    {
        remainder=binarynumber%10;
        decimal=decimal+remainder*base;
        base=base*2;
        binarynumber=binarynumber/10;
    }
    cout<<decimal<<endl;
    }
}
