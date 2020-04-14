#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
int number=n;

//upper
    for(int rows=n; rows>=0; rows--)
    {
       for(int col=n; col>=rows; col--)
       {
            cout<<col<<" ";
       }

    //space in between
      for(int space=(2*rows)-1; space>=1; space--)
      {
          cout<<"  ";
      }

      for(int col=rows; col<=n; col++)
      {
          if(col!=0)
          cout<<col<<" ";
      }

       cout<<endl;
    }

//lower
    for(int rows=1; rows<=n; rows++)
    {
        for(int cols=n; cols>=rows; cols--)
        {
            cout<<cols<<" ";
        }


        //space in between
        for(int space=1; space<=(2*rows)-1; space++)
        {
            cout<<"  ";
        }

        for(int cols=rows; cols<=n; cols++)
        {
            cout<<cols<< " ";
        }
        cout<<endl;
    }
}
