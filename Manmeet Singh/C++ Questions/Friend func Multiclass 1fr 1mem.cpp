#include<iostream>
using namespace std;


class b;
class a{
	int x;
	public:
	void input(int y){
	x=y;
	cout<<x<<"\n";	
}
	void swap(b);
};
	
class b{
	int x;
	public:
	void input(int y){
	x=y;
	cout<<x<<"\n";
	}

	friend void a::swap(b);
};

void a::swap(b n){
	int t;
	t=x;
	x=n.x;
	n.x=t;
cout<<x<<"\n"<<n.x<<"\n";
}

int main()
{
a o;
b t;
o.input(4);
t.input(10);
o.swap(t);

}
