#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char input[30];
	int count=0;
	ofstream file("file2.txt");
	cin.getline(input,30);
	file << input;
	file.close();
	ifstream file1("file2.txt");
	char gogle[2];
	while(file1)
	{
		file1.getline(gogle,2);
		count++;
		cout << gogle << endl << count << endl;
	}
}
