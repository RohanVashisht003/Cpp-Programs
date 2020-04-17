#include<iostream>
using namespace std;

int main()
{
    int n,number;
    cin>>n;
    int ans=0,temp=1;
     for(int i=0; i<n; i++)
     {
         cin>>number;
         ans=ans*10+number;
        // temp=temp*10;
     }
     int rev=0;
     int ans2=ans;

     for(int i=0; i<n; i++)
     {
          int r=ans2%10;
          rev= rev*10+r;
          ans2=ans2/10;
     }

     if(ans==rev)
     {
         cout<<"Palindrome";
     }
     else
     {
        cout<<"Not Palindrome";
     }

}
