#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
 //First row   
    cout<<'1'<<endl;
    
 //for loop from 2nd row   
    for(int row=1; row<n; row++)
    {
        cout<<row+1<<"  ";
        
 // for inserting zeroes in between numbers
        for(int col=1; col<row; col++)
        {
           cout<<'0'<<"  ";
        }
        cout<<row+1;
        cout<<endl;

    }
}
