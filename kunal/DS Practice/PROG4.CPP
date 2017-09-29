#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;

};

node *head=NULL;

void print()
{
    node *temp = head;
   while(temp!=NULL)
   {
       cout<<temp->data<<"\n";
       temp=temp->next;
   }
}

void insert_at_beg(int value)
{
    node *temp;
    temp=new node;
    temp->data=value;
    temp->next = NULL;
    if(head==NULL)
    {
    head = temp;
    }
    else
    {
      temp->next=head;
      head=temp;
    }
}
void insert_at_last(int value)
{
      node *temp,*curr;
      temp=new node;
      temp->data=value;
      temp->next=NULL;
     if(head==NULL)
     {
     head = temp;
      }
     else
     {

      curr=head;
      while(curr->next!=NULL)
      {
          curr=curr->next;
      }
      curr->next=temp;
     }
}

void insert_at_pos(int value,int pos)
{
    node *temp;
    temp=new node;
    temp->data=value;
    temp->next=NULL;
    node *curr=head;
    int count=0;
    if(head==NULL)
    {
        head=temp;
    }
    else if(pos==0)
    {
        temp->next=head;
        head=temp;
    }
    else{
        while(count<(pos-1))
        {
            curr=curr->next;
            count++;
        }
        temp->next=curr->next;
        curr->next=temp;
    }
}

void swapping(int pos1,int pos2)
{
    node *curr=head;
    node *curr1=head;
    node *prev=head;
    node *prev1=head;
    node *temp=new node;
    int count=0,count1=0;
    while(count<pos1-2)
    {
        prev=prev->next;
        count++;
    }
    if(pos1 != 1)
        curr = prev->next;
    while(count1<pos2-2)
    {
      prev1=prev1->next;
      count1++;
    }
    curr1 = prev1->next;
    cout << "prev " << prev->data << endl;
    cout << "curr " << curr->data << endl;
    cout << "prev1 " << prev1->data << endl;
    cout << "curr1 " << curr1->data << endl;
    if(pos1 == 1 && pos2-pos1 != 1)
    {
        temp = head;
        node *temp1 = new node;
        temp1 = curr1->next;
        head = curr1;
        curr1->next = prev1;
        prev1->next = temp;
        temp->next = temp1;
        return;
    }

    prev->next=curr1;
    temp=curr1->next;
    if(pos2-pos1 == 1)
    {
        curr1->next = curr;
        curr->next = temp;
        return;
    }
    else
    {
        curr1->next=curr->next;
        prev1->next=curr;
        curr->next=temp;
    }
}

void insertSample()
{
    for(int i=5;i>0;i--)
    {
        node *temp = new node;
        temp->data = i;
        temp->next = head;
        head = temp;
    }
}

void reverse_link()
{
    int n,count=0;
    node *curr=head;
    node *prev=NULL;
    node *temp;
    while(temp!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

    }
       //cout<<prev->data;
       head=prev;
}

int main()
{
    int n,value,pos,pos1,pos2;

 while(1)
 {
    cout<<"what you want to perform\n";
    cout<<"1.Insert at first\n";
    cout<<"2.Insert at last\n";
    cout<<"3.Insert at specific pos \n";
    cout<<"4.delete at first\n";
    cout<<"5.delete at last\n";
    cout<<"6.delete at pos\n";
    cout<<"7.search a element\n";
    cout<<"8.display\n";
    cout<<"9.sample data\n";
    cout<<"10. reverse a link list\n";

    cin>>n;

    switch(n){
    case 1:
        cout<<"enter the value\n";
        cin>>value;
        insert_at_beg(value);
        break;
    case 2:
        cout<<"enter the value\n";
        cin>>value;
        insert_at_last(value);
        break;
    case 3:
        cout<<"enter the value\n";
        cin>>value;
        cout<<"enter the position\n";
        cin>>pos;
        insert_at_pos(value,pos);
        break;
    case 4:
        cin>>pos1>>pos2;
        swapping(pos1,pos2);
        break;
    case 8:
        print();
        break;
    case 9:
        insertSample();
        break;
    case 10:
        reverse_link();
        break;
    default:
        break;
        }
    }

}
