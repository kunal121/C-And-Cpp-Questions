#include<iostream>
using namespace std;
struct stack {
	int data;
	stack *next;
}*top = NULL;

void push(int i)
{
	stack *temp = new stack;
	temp->data = i;
	temp->next = top;
	top = temp;
}

void display()
{
	stack *temp = top;
	cout << "\n--------\n";
	while(temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << "--------\n";
}

void pop()
{
	cout << top->data << " popped!\n";
	top = top->next;
}

int main()
{
	int choice;
	string msg = "\n1.Push\n2.Pop\n3.Display\n4.Exit ";
	cout << msg;
	cin >> choice;
	while(choice != 4)
	{
		switch(choice){
			case 1:
				for(int i=0;i<5;i++)
					push(i);
					
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
		cout << msg;
		cin >> choice;
	}
}
