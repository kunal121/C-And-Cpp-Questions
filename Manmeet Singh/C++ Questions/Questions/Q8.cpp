#include<iostream>
using namespace std;
class counter
{	int count;
	public:
	counter(int c){count=c;}
	void operator ++(int) {count++;}
	void operator --(int) {count--;}
	void show(){	cout<<count<<"\n";} };
main()
{	counter c(10);
	cout<<"Counter :";
	c.show();
	cout<<"After increment :";
	c++;
	c.show();
	cout<<"After decrement :";
	c--;
	c.show();}
