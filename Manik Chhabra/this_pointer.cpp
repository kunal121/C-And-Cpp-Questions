#include<iostream>
using namespace std;
class abc
{
	int a,b;
	public:
		abc()
		{
			a=5;
			b=10;
		}
		void display()
		{
			cout<<a<<"\n"<<b<<"\n";
			cout<<this->a<<"\n"<<this->b<<"\n";
		}
};
int main()
{
	abc ob;
	ob.display();
}
