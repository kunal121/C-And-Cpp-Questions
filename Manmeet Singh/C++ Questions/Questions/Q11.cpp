#include <iostream>
using namespace std;
class figure
{
protected:
	double a,b;
public:
	void getdata(){
		cin >> a >> b;
	}
	virtual void displayArea(){
		cout << (a*b);
	}
};
class triangle : public figure
{
	int area;
public:
	void displayArea(){
		cout << (a*b)/2 << endl;
	}
};
class rectangle : public figure
{
	int area;
public:
	void displayArea(){
		cout << (a*b) << endl;
	}
};

int main()
{
	triangle t;
	cout<<"Enter Base and height:"<<endl;
	t.getdata();
	cout<<"Area:";
	t.displayArea();
	cout<<"Enter length and breadth:"<<endl;
	rectangle r;
	r.getdata();
	cout<<"Area:";
	r.displayArea();
	return 0;
}
