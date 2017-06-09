#include<iostream>
using namespace std;


class b;
class a{
	
	public:
	int x;	
	void input(int y){
	x=y;
	cout<<x<<"\n";	
}

	friend void swap(a &o,b &o1);
};
	
class b{
	public:
	int x;
	void input(int y){
	x=y;
	cout<<x<<"\n";
	}

	friend void swap(a &o,b &o1);
};

void swap(a &m,b &n){
	int t;
	t=m.x;
	m.x=n.x;
	n.x=t;
	}

int main()
{
a o;
b t;
o.input(4);
t.input(10);
swap(o,t);
cout<<o.x<<"\n"<<t.x<<"\n";

}
