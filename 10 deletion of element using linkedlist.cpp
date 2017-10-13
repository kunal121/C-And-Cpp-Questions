#include<iostream>
using namespace std;

class node{
public:


    int data;
    node *next;
        int element,n;
        node *temp;
        node *start=NULL;
        node *newnode;

    void createnode()
    {
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
          cout<<"number"<<endl;
        int ele,flag=0,flag1=0;
    cin>>ele;
    temp=start;
    if(temp->data == ele){
    start=temp->next;
    flag1=1;


    }
    else{
    while(1){
    if(temp->next==NULL){break;}
    if(temp->next->data == ele){
    flag=1;break;
    }
    temp=temp->next;
    }
    }
    if(flag){
   temp->next=temp->next->next;


	  }
	if(flag1==0&&flag==0)
        cout<<"no element found"<<endl;

}
       void display()
		{
			temp=start;
			while (temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}

};
int main()
{
    node n;
    n.insertion_in_end();
    n.display();
    return 0;
}

