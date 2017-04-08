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
void MyStack::push(int i)
{
    top = 1;
    static int j=0;
    a[j]=i;
    j++;
}
int MyStack::pop()
{
    int ab;
    static int i=0;
    ab=a[i];
    i++;
    if(ab == 0)
    {
        top = -1;
    }
    return ab;
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
