#include<iostream>
using namespace std;
struct queue
{
    int arr[99999];
    int top=-1,bottom=0;
}q;
void push(int n)
{
    q.arr[++q.top]=n;
}
void pop()
{
    q.bottom++;
}
void display()
{
    for(int i=q.bottom;i<=q.top;i++)
    {
        cout<<q.arr[i]<<" ";
    }
}
main()
{
    int n=0;
    cout<<"Enter the element or -1 to exit\n";
    cin>>n;
    while(n!=-1)
    {
        push(n);
        cin>>n;
    }
    cout<<"Enter 1 to pop or 0 to exit\n";
    cin>>n;
    while(n!=0)
    {
        pop();
        cin>>n;
    }
    cout<<"Elements of queue are\n";
    display();
}
