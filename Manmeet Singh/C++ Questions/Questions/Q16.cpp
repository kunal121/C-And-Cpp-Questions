#include<iostream>
using namespace std;
int main() {	int x=-1;
	try {
	    if(x<0)
			throw x;
	}
	catch(int) {
	    cout<<"Negative value exception\n";
	}
	cout<<"After catch.\n";

}
