#include<iostream>
using namespace std;
class counter {
	private:
		int count ;
	public:
		counter() {
			count = 34 ;
		}
		void operator ++ () {
			count=++count;

		}

		void operator - () {
			count=-count;
		}

		void display() {
			cout<< count <<endl ;
		}
};

int main() {
	counter ob,ob1;
	cout<< "Before using the operator \n";
	ob.display();
	-ob;
	cout<<"unary operator-:";
	ob.display();
	++ob1;
	cout<<"after incrementing: ";
	ob1.display();
}
