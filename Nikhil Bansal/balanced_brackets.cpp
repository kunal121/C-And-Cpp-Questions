#include<iostream>
using namespace std;
struct stack{
	int top;
	char a[100];
}st;

void init()
{
	st.top = -1;
}

void push(char a)
{
	st.a[++st.top] = a;
}

void pop()
{
	st.top--;
}

int main()
{
	string str;
	cout << "Enter string ";
	cin >> str;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] == ')' || str[i] == '}' || str[i] == ']')
			if(st.a[st.top] == '(' && str[i] == ')' || st.a[st.top] == '{' && str[i] == '}' || st.a[st.top] == '[' && str[i] == ']')
				pop();
		else
			push(str[i]);
	}
	if(st.top == -1)
		cout << "YES";
	else
		cout << "NO";
}
