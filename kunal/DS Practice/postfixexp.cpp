#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL,*head1=NULL;

void push(int value)
{
    node *temp;
    temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *temp_head = head;
        while(temp_head->next != NULL)
        {
            temp_head = temp_head->next;
        }
        temp_head->next = temp;
    }
}
int pop()
{
    node *curr=head;
    int b;
    if(curr->next == NULL)
    {
        b = curr->data - '0';
        head = NULL;
        cout << b << endl;
        return b;
    }
    else
    {
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    b=curr->next->data-'0';
    curr->next = NULL;
    cout << b << endl;
    return b;
    }
}
void display()
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
int main(){
    string s;
    cin>>s;
    int a,b;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='+' && s[i]!='-' && s[i]!='/' && s[i]!='*')
        {
            push(s[i]);
        }
        else
        {
            a=pop();
            b=pop();
            display();
            cout << endl << endl;
            switch(s[i]){
            case '+':
                push(a+b);
                break;
            case '-':
                push(a-b);
                break;
            case '*':
                push(a*b);
                break;
            case '/':
                push(a/b);
                break;
            display();
            cout << a << " " << b << endl;

         }
    }
    //display();
}
}


