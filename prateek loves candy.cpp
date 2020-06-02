#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    int n;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
int p=2; //numbers
int counter=1;
while(counter<=n)
{
    int flag=1;
    for(int check=2; check<=p-1; check++)
    {

            if(p%check==0)
            {
                flag=0;
                break;
            }
    }

            if(flag==1)
            {

                counter++;
            }
            p++;
    }
    cout<<p-1<<endl;
    }

}
