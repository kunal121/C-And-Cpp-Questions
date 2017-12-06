#include<iostream>
#include<math.h>
using namespace std;
struct stack
{
    int arr[9999];
    int top=-1;
}st;
void push(int data)
{
    st.arr[++st.top]=data;
}
int pop()
{
    int x=st.arr[st.top];
    st.top-=1;
    return x;
}
void display()
{
    for(int i=0;i<=st.top;i++)
    {
        cout<<st.arr[i]<<" ";
    }
    cout<<endl;
}
main()
{
    string x;
    int b,c;
    cout<<"Enter the data\n";
    cin>>x;
    int len,a;
    len=x.length();
    for(int i=0;i<len;i++)
    {
        if(x[i]>=48 && x[i]<=57)
        {
            push(x[i]-48);
        }
        else
        {
            switch(x[i])
            {
            case '+' :
                a=st.arr[st.top]+st.arr[--st.top];
                pop();
                push(a);
                break;
            case '-' :
                b=pop();
                c=pop();
                a=c-b;
                push(a);
                break;
            case '*' :
                a=st.arr[st.top]*st.arr[--st.top];
                pop();
                push(a);
                break;
            case '/' :
                a=st.arr[st.top]/st.arr[--st.top];
                pop();
                push(a);
                break;
            case '^':
                a=pop();
                b=pop();
                //cout<<a<<b;
                c=pow(a,b);
                push(c);
                //display();
                break;
            default:
                cout<<"wrong input "<<x[i]<<endl;
            }
        }
    }
    display();
}
