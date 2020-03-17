#include<iostream>
using namespace std;
int main()
{
int first=0, second=1,n,sum=0;
cin>>n;

//rows track
for(int rows=1; rows<=n; rows++)
{

//column track
    for(int cols=1; cols<=rows; cols++)
    {
    
    // first row and first column 
        if(rows==1 && cols==1)
        {
            cout<<'0';
        }
        
    // all other fibonacci terms
        else
        {
        first=second;
        second=sum;
        sum=first+second;
        
   //spacing between each number     
        cout<<first+second<<"    ";
        }
    }
    cout<<endl;
}
}
