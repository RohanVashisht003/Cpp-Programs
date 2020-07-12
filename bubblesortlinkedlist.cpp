#include<iostream>
#include<list>
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

class LinkedList
{
public:
    Node *head;
    Node *tail;
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }

void insert_front(int x)
{
    Node *n=new Node(x);
    if(head==NULL)
    {
        head=n;
        tail=head;
    }
    else
    {
        n->next=head;
        head=n;
    }
}

void print()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
};



int main()
{
LinkedList l1;
int n,no;
cin>>n;
for(int i=1; i<=n; i++)
{
    cin>>no;
    l1.insert_front(no);
}
l1.print();
}
