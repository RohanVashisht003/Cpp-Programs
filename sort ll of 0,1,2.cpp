#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int x)
    {
    data=x;
    next=NULL;
    }
};

class Linkedlist
{
public:
    Node *head;
    Node *tail;

    Linkedlist()
    {
        head=NULL;
        tail=NULL;
    }

void insert_last(int d)
{
    Node *n=new Node(d);
    if(head==NULL)
    {
        head=n;
        tail=head;
    }

   tail->next=n;
   tail=n;
}

void print_ll()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
}

void sorting()
{
    int counter[3]={0,0,0};
    Node *temp=head;
    while(temp!=NULL)
    {
        counter[temp->data]+=1;
        temp=temp->next;
    }

    int i=0;
    temp=head;
    while(temp!=NULL)
    {
        if(counter[i]==0)
          i++;
        else
        {
          temp->data=i;
          counter[i]--;
          temp=temp->next;
    }
}
}
};


int main()
{
    int n;
    cin>>n;
    Linkedlist l;
    while(n)
    {
        int t;
        cin>>t;
        l.insert_last(t);
        n--;
    }
    l.sorting();
    l.print_ll();
}
