#include<iostream>
using namespace std;
 int main()
 {
     int initi_value, fin_value, step;
     cin>>initi_value>>fin_value>>step;

     for(int i=initi_value; i<=fin_value;)
     {
         int c=(5/9.0)*(i-32);

         i=i+step;

         cout<<i<<" "<<c<<endl;

     }

 }
