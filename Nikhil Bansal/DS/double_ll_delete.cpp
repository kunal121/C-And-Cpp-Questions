#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
}*head = NULL;

void insert(int value)
{
	node *temp = new node;
	temp->data = value;
	if(head == NULL)
	{
		 head = temp;
		 temp->next = head;
	}
	else
	{
		node *temp_head = head;
		while(temp_head->next != head)
		{
			temp_head = temp_head->next;
		}
		temp->next = head;
		head = temp;
		temp_head->next = head;
	}
}

void display()
{
	node *temp_head = head;
	while(temp_head->next != head)
	{
		cout << temp_head->data << endl;
		temp_head = temp_head->next;
	}
	cout << temp_head->data << endl;
}

void delete_element()
{
	int pos;
	cout << "Enter position ";
	cin >> pos;
	int count = 0;
	node *temp = head;
	if(pos == 0)
	{
		while(temp->next != head)
			temp = temp->next;
		head = head->next;
		temp->next = head;
		return;
	}
	while(count < pos-2)
	{
		temp = temp->next;
		count++;
	}
	temp->next = temp->next->next;
}

int main()
{
	for(int i=0;i<5;i++)
		insert(i);
	display();
	int choice = 1;
	while(choice)
	{
		cout << "Press 1 to delete and 0 to exit ";
		cin >> choice;
		if(choice == 1)
		{
			delete_element();
			display();
		}
	}
	return 0;
}


