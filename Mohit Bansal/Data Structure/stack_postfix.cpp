#include<iostream>
#include<string.h>
using namespace std;
class node
{
    int data;
    node *next;
public:
    node *top=NULL;
    void push(int d)
    {
        node *nn=new node();
        nn->data=d;
        nn->next=top;
        top=nn;
    }
    bool isEmpty()
    {
        if(top==NULL)
            return true;
        return false;
    }
    void pop()
    {
        if(!isEmpty())
        {
            int x=top->data;
            node *temp=top;
            top=top->next;
            temp->next=NULL;
            delete(temp);
            //cout<<x;
        }
        else
            cout<<"Stack is empty"<<endl;
    }
    int peek()
    {
        if(!isEmpty())
        {
            int x=top->data;
            return x;
        }
        else
            cout<<"Stack is empty"<<endl;
    }

};
int main()
{
    node nn;
    int n;
    cout<<"Enter the number of values"<<endl;
    cin>>n;
    char str[100];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i]>='0' && str[i]<='9')
            nn.push(str[i]-'0');
        else
        {
            int val1 = nn.peek();
            int val2 = nn.peek();
            switch (str[i])
            {
             case '+': nn.push( val2 + val1);// cout<<nn.peek();
              break;
             case '-': nn.push( val2 - val1); break;
             case '*': nn.push( val2 * val1); break;
             case '/': nn.push( val2/val1);   break;
            }
        }
    }
    cout<<(int)nn.peek()<<endl;
}
