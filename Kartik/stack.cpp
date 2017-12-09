#include<iostream>
using namespace std;
struct stack
{
    int arr[9999999];
    int top=-1;
}st;
int pop()
{
    return st.top--;
}
void push(int val)
{
    st.arr[++st.top]=val;
}
void display()
{
    for(int i=0;i<=st.top;i++)
    {
        cout<<st.arr[i]<<endl;
    }
}
main()
{
    int n,val;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        push(val);
    }
    cout<<"Elements are "<<endl;
    display();
    pop();
    cout<<"Elements after pop are"<<endl;
    display();
}
