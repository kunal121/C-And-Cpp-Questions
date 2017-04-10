#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//writing
ofstream abc("file.txt");
char name[30];
int roll;
cin.getline(name,30);
cin>>roll;
abc<<name<<endl<<roll;
abc.close();
//reading
ifstream def("file.txt");
//char name[30];
//int roll;
def.getline(name,30);
def>>roll;
cout<<name<<endl<<roll;
def.close();





}
