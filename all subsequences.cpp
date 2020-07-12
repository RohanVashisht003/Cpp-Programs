#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> v;
int counter=0;
 void subsequence(string input, string output)
 {
     if(input.length()==0)
     {
         counter++;
         v.push_back(output);
         return;
     }

     subsequence(input.substr(1),output);
     subsequence(input.substr(1),output + input[0]);
 }

 int main()
 {
     string input;
     cin>>input;
     string output=" ";
     subsequence(input,output);
     int s=v.size();
     for(int i=0; i<s; i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
     cout<<counter;
     v.clear();
 }
