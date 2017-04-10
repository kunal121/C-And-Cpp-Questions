#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// Open file in write mode
	ofstream out("file.txt");
	cout << "Enter name";
	string name;
	// Take input from keyboard
	cin >> name;
	// Write to file	
	out << name;
	cout << "Enter college";
	string college;
	cin >> college;
	out << college;
	// Open file in read mode	
	ifstream in("file.txt");
	// Extract content from file.txt	
	in >> name;
	// Print on the monitor	
	cout << name;

	return 0;
}
