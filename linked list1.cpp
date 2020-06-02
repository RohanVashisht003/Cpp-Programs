#include<iostream>
using namespace std;

    class Node
    {
    public:
        int data;
        Node* next;

        Node(int x)
        {
            data=x;
            next=NULL;
        }
    };

    class LinkList
    {
    public:

        Node* head;
        Node* tail;

        LinkList()
        {
            head=NULL;
            tail=NULL;
        }


        void Insert_at_first(int x)
        {
            //create new node
        Node* n=new Node(x);

        //insertion
        if(head==NULL)
        {
            //first node

            head=n;
            tail=head;
        }
        else
        {
            n->next=head;
            head=n;
        }
        }


//length of a linked list

       int length()
       {
           int len=0;
           Node* temp=head;
           while(temp!=NULL)
           {
               len++;
               temp=temp->next;
           }
           return len;
       }


        void Insertion_at_last(int x)
       {
           Node* n=new Node(x);
           if(head==NULL)
           {
               head=n;
               tail=n;
           }
           else{
            tail->next=n;
            tail=n;
           }
       }


         void print()
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        }

    //find element
    bool find_ele(int key)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return true;

            }
            temp=temp->next;
        }
                return false;
    }


//Insert at position
    void Insert_at_position(int x,int pos)
    {
        if(pos==0)
        {
            Insert_at_first(x);
        }

        else if(pos>length())
        {
            Insertion_at_last(x);
        }

        else
        {
            Node* temp=head;
            int moveno=1;
            while(moveno<pos-1)
            {
                moveno++;
                temp=temp->next;
            }

            Node* n=new Node(x);
            Node* aagewalinodes=temp->next;
            head->next=n;
            n->next=aagewalinodes;
        }
    }

//Deletion from start
    void delete_from_first()
    {
        if(head!=NULL)
        {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    }

//Deletion from last
    void delete_from_last()
    {
        Node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }

//Deletion at position
  void delete_at_position(int pos)
  {
      if(pos==1)
      {
          delete_from_first();
      }

      else if(pos==length())
      {
          delete_from_last();
      }

      else if(pos>length())
      {
          return;
      }

      else
      {
          Node* temp=head;
          Node* number=head;
          for(int i=1; i<pos-1; i++)
          {
              temp=temp->next;
              number=number->next;
          }
           number=number->next;
          temp->next=temp->next->next;
          delete number;
      }
  }

   Node* mid_of_ll()
  {
      Node* fast=head->next;
      Node* slow=head;
      while(fast!=NULL && fast->next!=NULL)
      {
          fast=fast->next->next;
          slow=slow->next;
      }
      return slow;
  }
    };


    Node* mergell(Node *ll1, Node* ll2)
    {
    //base case
    if(ll1==NULL)
    {
        return ll2;
    }
    if(ll2==NULL)
    {
        return ll3;
    }

    Node *ll3;
    if(ll1->data > ll2->data)
    {
        ll3=ll2;

        ll3->next=mergell(ll1,ll2->next);
    }
    else
    {
        ll3=ll1;
        ll3->next=mergell(ll1->next, ll2);
    }
    return ll3;
}


void print(Node *head)
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        }


    int main()
    {
        LinkList l1;
        LinkList l2;
       /* l1.Insert_at_first(10);
        l1.Insert_at_first(20);
        l1.Insert_at_first(30);
        l1.Insert_at_first(40);
        l1.Insert_at_first(50);
        l1.Insert_at_first(60);
      //  l1.Insertion_at_last(30);
      //  l1.Insert_at_position(70,1);
      //  cout<<l1.find_ele(20)<<endl;
        //l1.print();
        //cout<<endl;
        l1.length();

        //cout<<endl;
        //l1.delete_from_last();

      l1.print();*/
       // cout<<endl;
        //l1.delete_at_position(1);
         //l1.print();

        // cout<<endl;
        // Node* mid=l1.mid_of_ll();
        // cout<<mid->data;

  int n1, n2;
  cin>>n1;
  cin>>n2;
  int l,m;
  for(int i=1; i<=n1; i++)
  {
    cin>>l;
    l1.Insertion_at_last(l);
  }


  for(int j=1; j<=n2; j++)
  {
    cin>>m;
    l2.Insertion_at_last(m);
  }

  Node *ans=mergell(l1.head,l2.head);
  print(ans);
  }
