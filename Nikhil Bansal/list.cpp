#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l;
	int num;
	for(int i=0;i < 5 ; i++)
	{
		cin >> num;
		l.push_back(num);
	}
	list <int > :: iterator it;
	int count=0;
	for(it = l.begin(); count != 2 ; it++)
	{
		count++;
	}
	cout << *it;
}
