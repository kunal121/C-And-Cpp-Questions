#include<iostream>
using namespace std;
class abc
{
	int a=2;
	public:
		friend void change(abc &o);
		display()
		{
			cout<<a;
		}
		
};
void change(abc &o1)
{
	o1.a=o1.a+5;
}
int main()
{
	abc o1;
	change(o1);
	o1.display();
}
