#include<iostream>
using namespace std;
int main()
{
    int n,decimalnum;
    cin>>n;
    for(int i=1; i<=n;  i++)
    {
        cin>>decimalnum;
        int rem, temp = 1,binarynum=0,counter=0;

//Calculate binary form
    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        binarynum = binarynum + rem*temp;
        decimalnum = decimalnum / 2;
        temp = temp * 10;
    }

//Count Number(s) of 1 in binary form
    while(binarynum!=0)
    {
        int rem2=binarynum%10;
        binarynum=binarynum/10;
        if(rem2==1)
        {
            counter++;
        }
    }
    cout<<counter;
    }


}
