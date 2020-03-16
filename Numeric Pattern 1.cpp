#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
// First row   
    cout<<"1"<<endl;
    if(n!=1)
    {
// Rows 
    for(int i=1; i<n; i++)
    {
        cout<<i;
// Columns

   for(int j=1; j<i; j++)
    {
        cout<<"0";
    }
    cout<<i;
    cout<<endl;
    }

}
}
