#include<iostream>
using namespace std;
class counter
{
		private:
			int count ;
		public:
			counter()
			{
				count = 10 ;
			}
			void operator ++ () {
				count=++count;
			}
			void operator - () {
				count=-count;
			}
			void display() {
				cout << count << endl ;
			}
};
int main() {
		counter ob,ob1;
		cout <<"Before using the operator, count is = ";
		ob.display();
		-ob;
		cout<<"\nAfter using unary operator - , count is = ";
		ob.display();
		++ob1;
		cout<<"\nAfter using unary operator ++ , count is = ";
		ob1.display();
}
