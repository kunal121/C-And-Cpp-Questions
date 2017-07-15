#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
 ofstream out("f1.txt",ios::trunc);
 int roll,marks;
 char sec[100];
 char name[100];
 cout<<"enter name,section,roll no. and marks";
 cin.getline(name,100);
 cin.getline(sec,100);
 cin>>roll>>marks;
 out<<name<<endl<<sec<<endl<<roll<<endl<<marks;

}
