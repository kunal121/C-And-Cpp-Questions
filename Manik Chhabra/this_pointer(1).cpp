#include<iostream>
using namespace std;
class abc
{
	int age;
	public:
		abc()
		{
			
		}
		abc(int x)
		{
			age=x;
		}
		abc& greater(abc &ob)
		{
			if(ob.age>age)
				return ob;
			else
				return *this;	
		}
		void display()
		{
			cout<<age;
		}
};
int main()
{
	int a,b;
	cin>>a>>b;
	abc A(a);
	abc B(b);
	abc max;
	max=A.greater(B);
	max.display();
}
