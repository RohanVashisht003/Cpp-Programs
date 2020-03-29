#include<iostream>
using namespace std;

int main()
{
    int limit;
    cin>>limit;

    for(int row=1; row<=limit; row++)
    {
        int number=row;

        //spaces
        for(int space=1; space<=limit-row; space++)
        {
            cout<<" ";
        }

        // for 1 only
            if(row==1)
        {
            cout<<"1";
        }

        // for all other numbers
            else
        {

        // for cols
        for(int cols=0; cols<(2*row)-1; cols++)
        {
        int mid=((2*row)-1)/2;
            if(cols<mid)
            {
                cout<<number;
             number=number+1;
            }

            else
            {
              cout<<number;
              number=number-1;
            }

        }
        }
        cout<<endl;
    }
}
