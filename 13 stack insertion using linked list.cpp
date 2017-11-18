#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next;

};
class Stack
{
  int top=-1;
  int n;
  public:
   int element;
       struct node *temp;
       struct node *start=NULL;
       struct node *newnode;

    void createnode()
    {
        //node *newnode;
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
    }   //Maximum size of Stack
  Stack()
  {
      cout<<"Enter the number of elements in stack\t";
    cin>>n;
  }
    void push();
    void pop();
    void display();
};

void Stack::push()
{
  if( top == n-1)
  {
    cout << "Stack Overflow"<<endl;
  }
  else
  {
      top++;
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
}

void Stack::pop()
{
  if(top == -1)
  {
    cout << "Stack Underflow"<<endl;
  }
  else
  {
    top--;
    temp=start;

			while (temp->next!=NULL&&temp->next->next!=NULL)
			{
			    temp=temp->next;
			}
			temp->next=NULL;




   // display();
  }

}
void Stack :: display()
{
   temp=start;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
  // cout<<top<<endl;
   cout<<endl;
}


int main()
{
    Stack s;
    while(1)
    {
        cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.display"<<endl;
       int x,v=0;
       cin>>x;
       switch(x)
       {
       case 1:
           s.push();
           break;
       case 2:
            s.pop();
            break;
       case 3:
            s.display();
            break;
       default:
            v=1;
            break;
       }
       if(v){break;}
     }

    return 0;
}
