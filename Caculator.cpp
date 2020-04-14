#include<iostream>
using namespace std;
int main()
{
    char ch;
    int n1,n2,res;
    cin>>ch;

    while(ch!='X' && ch!='x')
    {
        switch(ch)
        {
        case '+':
            {
                cin>>n1;
                cin>>n2;
                res=n1+n2;
                cout<<res;
                break;
            }

        case '-':
            {
                cin>>n1;
                cin>>n2;
                res=n1-n2;
                cout<<res;
                break;
            }
        case '/':
            {
                cin>>n1;
                cin>>n2;
                res=n1/n2;
                cout<<res;
                break;
            }
        case '*':
            {
                cin>>n1;
                cin>>n2;
                res=n1*n2;
                cout<<res;
                break;
            }
        case'%':
            {
                cin>>n1;
                cin>>n2;
                res=n1%n2;
                cout<<res;
                break;

            }
        default:
            cout<<"Invalid Operation. Try again."<<endl;
            break;
    }
    cin>>ch;
}
}
