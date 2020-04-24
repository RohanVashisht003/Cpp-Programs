#include<iostream>
using namespace std;

void permutation(char a[],int i)
{
    //base condition
    if(a[i]=='\0')
    {
        cout<<a<<endl;
        return;
    }

    //recursive case
    for(int j=i; a[j]!='\0'; j++ )
    {
        swap(a[j],a[i]);
        permutation(a,i+1);
        swap(a[i],a[j]);
    }
}


int main()
{
    int n;
    cin>>n;
char a[1000];
for(int i=0; i<=n; i++)
{
    cin>>a[i];
}
permutation(a,0);
return 0;
}

