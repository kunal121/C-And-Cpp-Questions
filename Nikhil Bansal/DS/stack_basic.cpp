#include<iostream>
using namespace std;
struct stack{
	int top;
	int a[1000000];
	int max;
}st;
void init()
{
	st.top = -1;
}
void push(int i)
{
	if(st.top == st.max-1)
	{
		cout << "Stack overflow!";
		return;
	}
	st.a[++st.top] = i;
}
void pop()
{
	if(st.top == -1)
	{
		cout << "Stack unserflow!";
		return;
	}
	cout << st.a[st.top--] << " popped!"; 
}
void display()
{
	cout << "\n-------------\n";
	for(int i=0;i<=st.top;i++)
		cout << st.a[i] << endl;
	cout << "--------------\n";
}
int main()
{
	int option;
	init();
	cout << "Enter size of stack ";
	cin >> st.max;
	string msg = "\n1.Push\n2.Pop\n3.Display\n4.Exit ";
	cout << msg;
	cin  >> option;
	while(option != 4)
	{
		switch(option){
			case 1:
				for(int i=0;i<st.max;i++)
				{
					int j;
					cout << "Enter values ";
					cin >> j;
					push(j);
				}
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
		cout << msg;
		cin >> option;
	}
}
