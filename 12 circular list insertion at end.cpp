#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next;

};
class node2
{
public:
        int element,n;
       struct node *temp,*temp1;
       struct node *start=NULL;
       struct node *newnode;

    void createnode()
    {
        //node *newnode;
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
    }
   void insertion_in_end()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            createnode();
            if(start==NULL)
            {
                start=newnode;
            }
            else
            {
                temp=start;
                while(temp->next!=NULL){
                    temp=temp->next;
                    }
                temp->next=newnode;

            }


        }
        newnode->next=start;
    }
       void display()
		{
			temp=start;
			//temp1=start;
			while (temp->next!=start)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<temp->data;
			cout<<" "<<temp->next->data;
			cout<<" "<<temp->next->next->data;
		}
};
int main()
{
    node2 n;
    n.insertion_in_end();
    n.display();
    return 0;
}

