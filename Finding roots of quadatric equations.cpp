#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   float d;
// Formula for calculating value of D.

   d=b*b-4*a*c;
   float squareroot=sqrt(d);
   if(d==0)
   {
       cout<<"Real and Equal";

   }
   else if(d>=0)
   {
       cout<<"Real and Distinct";
   }

   else if(d<=0)
   {
       cout<<"Imaginary";
   }
   cout<<endl;
   int x1,x2;
   if(d>=0)
   {
     x1=(-b-squareroot)/(2*a);
     x2=(-b+squareroot)/(2*a);
     cout<<x1<<" "<<x2;
   }

}
