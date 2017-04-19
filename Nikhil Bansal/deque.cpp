#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int> dq;
	int num;
	for(int i=0;i<3;i++)
	{
		cin >> num;
		dq.push_back(num);
	}
	dq.pop_back();
	for(int i=0;i<dq.size();i++)
	{
		cout << dq[i];
	}
}
