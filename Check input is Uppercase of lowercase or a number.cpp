#include<iostream>
using namespace std;

int main()
{
    char ch;

    cin>>ch;

    if(ch>=66 && ch<=91)
    {
        cout<<"UPPERCASE";
    }

    else if(ch>=97 && ch<=123)
    {
        cout<<"lowercase";
    }

    else
    {
        cout<<"number";
    }
}
