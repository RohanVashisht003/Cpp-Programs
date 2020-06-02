#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int x)
	{
		data=x;
		next=NULL;
	}
};

class LinkedList
{
public:
	node *head;
	node *tail;

	LinkedList()
	{
		head= NULL;
		tail= NULL;
	}


	node *recursive(node *head)
	{
	    if(head==NULL || head->next==NULL)
        {
            return head;
        }
        node *first=recursive(head->next);
        head->next->next=head;
        head->next=NULL;

        return first;
	}

	node *reversell(node *a)
	{
	    node *curr=head;
	    node *mynext=head;
        node *prev=NULL;
        while(curr!=NULL)
        {
            mynext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=mynext;
        }
        return prev;
	}

void Insert_at_last(int x)
{
  node *n=new node(x);
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

node *insertion_sort(node *head)
{

    node *current=head->next;
    node *insertion=head;
    while(current!=NULL)
    {
        while(insertion!=current)
        {
            if(insertion->data >= current->data)
            {
                int third=insertion->data;
                insertion->data=current->data;
                current->data=third;
            }
            else
            {
                insertion=insertion->next;
            }
        }
        current=current->next;
    }

}
void print(node *head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

node *add_list_recursive(node *n1,node *n2, int carry)
{
    //base case;
    if(n1==NULL && n2==NULL)
    {
        if(carry>0)
        {
            return new node(carry);
        }
        return NULL;
    }

    int value1=(n1!=NULL)?n1->data:0;
    int value2=(n2!=NULL)?n2->data:0;

    int sum=(value1+value2+carry)%10;
     carry=(value1+value2+carry)/10;
     node *currenthead=new node(sum);
     node *n1next=(n1!=NULL)?n1->next:NULL;
     node *n2next=(n2!=NULL)?n2->next:NULL;
         currenthead->next=add_list_recursive(n1next,n2next,carry);
         return currenthead;
}
node *reverse_list(node *head)
{
    node *curr=head;
    node *prev=NULL;
    node *mynext=NULL;
    while(curr!=NULL)
    {
        mynext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=mynext;
    }
    return prev;
}

node *add_list(node *n1, node *n2)
{
    return add_list_recursive(n1,n2,0);
}
};

int main()
{
	LinkedList l1;
	LinkedList l2;
	int n1,n2;
	cin>>n1>>n2;
	while(n1>0)
	{
		int no;
		cin>>no;
		l1.Insert_at_last(no);
		n1--;
	}

	//l1.print(l1.head);
	cout<<endl;
	while(n2>0)
	{
		int no;
		cin>>no;
		l2.Insert_at_last(no);
		n2--;
	}
	cout<<endl;
	//l2. print(l2.head);
   node *result;
   result=l1.add_list(l1.head,l2.head);
   cout<<endl;
   node *answer=l1.reverse_list(result);
   l1.print(answer);

    //node *ans;
   //ans=l1.reversell(l1.head);
   //ans=l1.recursive(l1.head);
   // ans=l1.insertion_sort(l1.head);




}
