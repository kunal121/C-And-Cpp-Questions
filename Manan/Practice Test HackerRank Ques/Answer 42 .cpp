#include<iostream>
using namespace std;

#define MAX 1000
class Stack
{
	protected:
	 int top;
public:
    int a[MAX];
    virtual void push(int)=0;
    virtual int pop()=0;
    virtual int max()=0;
};
class MyStack:public Stack
{
public:

    MyStack()
	{
	   top = -1;
	 }
	 void push(int);
int pop();

	 int max()
{
	int m=-1;
	for(int i=0;top!=-1;i++)
	{
		int x=pop();
     if(m<x)
       m=x;
   }
   return m;
}
};

static int i=0;
int MyStack::pop()
    {
    i--;
    if(i==0)
        top=-1;
    return a[i];
}
void MyStack::push(int m)
    {
    a[i]=m;
    top=1;
    i++;
}

int main()
{
    Stack *ss;
    MyStack mystack;
    ss=&mystack;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		ss->push(temp);
	}
    cout <<"Max is "<<ss->max();

    return 0;
}

