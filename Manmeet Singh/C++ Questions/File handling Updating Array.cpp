#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char a[5][5];
	int pos = 0;
	char st[20];
	cin>>st;
    cout<<"Enter arr data\n";
    for(int i=0;i<5;i++)
	{
	cin>>a[i];
	}

	ifstream in("File.txt");

	if(in.is_open())
	{
		in.seekg(0, ios::end);
		int length = in.tellg();
		in.seekg(0,ios::beg);

		cout << "Enter postion";
		int pos;
		cin >> pos;

		if(pos >= 0 && pos <= length)
		{
			in.seekg((pos-1)*sizeof(a[0]),ios::beg);
			ofstream out("File.txt");
            out<<st;

			for(int i = 0; a[i] != '\0'; i++){
				cout << a[i];
			}
		}
		else {
			cout << "Invalid postion" << endl;
		}
	}
	else {
		cout << "File not opened." << endl;
	}

	return 0;
}
