#include<iostream>
using namespace std;
struct stack{
	int top;
	char a[1000];
}operators,postfix;

void init()
{
	operators.top = -1;
	postfix.top = -1;
	operators.a[++operators.top] = '(';
}

bool isOperator(char a)
{
	if(a == '+' || a == '-' || a == '*' || a == '/' || a == '^')
		return true;
	else
		return false;
}

void push(stack &st,char a)
{
	st.a[++st.top] = a;
}

int getPrecedance(char a){
	switch(a)
	{
		case '^' : return 3;
		case '*' : return 2;
		case '/' : return 2;
		case '+' : return 1;
		case '-' : return 1;
		default : return 0;
	}
	
}

bool isGreatePrecedance(char a){
	char top = operators.a[operators.top];
	if(getPrecedance(top) < getPrecedance(a))
		return true;
	else
		return false;
}

bool isOperand(char a)
{
	if(a >= '0' && a <= '9' || a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		return true;
	else
		return false;
}

char pop(stack &st)
{
	return st.a[st.top--];
}

void display(stack st)
{	
	cout << "Postfix : ";
	for(int i=0;i<=st.top;i++)
		cout << st.a[i];
}

int main()
{
	init();
	string infix;
	cout << "Enter expression ";
	cin >> infix;
	for(int i=0;infix[i] != '\0';i++)
	{
		if(isOperator(infix[i]))
		{
			if(isGreatePrecedance(infix[i]))
				push(operators,infix[i]);
			else
			{
				while(operators.a[operators.top] != '(')
					push(postfix,pop(operators));
				push(operators,infix[i]);
			}
		}
		else if(infix[i] == '(')
			push(operators,infix[i]);
		else if(isOperand(infix[i]))
			push(postfix,infix[i]);
		else if(infix[i] == ')')
		{
			while(operators.a[operators.top] != '(')
				push(postfix,pop(operators));
			pop(operators);
		}
	}
	while(operators.a[operators.top] != '(')
		push(postfix,pop(operators));
	display(postfix);
}
