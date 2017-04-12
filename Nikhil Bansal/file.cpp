#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("file.txt");
	char name[30];
	char college[30];
	char interest[30];
	cin >> name >> college >> interest;
	out << name << college;
	int flag = 1;
	while(flag==1)
	{
		cout << "\n";
		for(int i=0;interest[i] != '\0';i++)
			out.put(interest[i]);
		flag = 0;
	}	
	out.close();
	ifstream in("file.txt");
	char ch;
	while(in)
	{
		ch = in.get();
		cout << ch << endl;
	}
	in.close();
	
return 0;
}
