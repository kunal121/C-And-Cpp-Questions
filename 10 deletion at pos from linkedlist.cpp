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
         cout<<"pos"<<endl;
        int k,flag=0;
        cin>>k;
        temp=start;
        for(int i=0;i<(k-2);i++){


            temp=temp->next;

           //  cout<<"x ";


        }
      //  createnode();
        if(k==1){
           // newnode->next=start;
            start=temp->next;
        }else{
        temp->next=temp->next->next;

       // temp->next=newnode;}

    }
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

