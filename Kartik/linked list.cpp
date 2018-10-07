#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*start;
void insert(int p)
{
	struct node *newnode=new node();
	newnode->data=p;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		struct node *ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}
void display()
{
	int countnode=0;
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
		countnode++;
	}
	cout<<"no of nodes"<<countnode;
}
main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int v;
		cin>>v;
		insert(v);
	}
	display();
}
