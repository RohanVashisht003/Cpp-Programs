#include <iostream>
using namespace std;
int main()
{
	int i,j,k=0,rows;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		i<=((rows+1)/2)?k++:k--;
		for(j=1;j<=rows;j++)
		{
			if(j<=((rows+3)/2)-k||j>=((rows-1)/2)+k)
			cout<<"*"<<'\t';
			else
			cout<<" "<<'\t';
		}
		cout<<'\n';
	}
	return 0;
}
