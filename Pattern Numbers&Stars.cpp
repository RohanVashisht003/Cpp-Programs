#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

//rows track
    for(int row=1; row<=n; row++)
    {

//for printing numbers
            for(int num=1; num<=row; num++)
            {
                cout<<num;
            }
            
//for printing stars
            for(int star=1; star<=n-row; star++)
            {
                cout<<"*";
            }
        cout<<endl;
}
}
