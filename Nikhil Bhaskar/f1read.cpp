#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream in("f1.txt",ios::in);
     int roll,marks,count1=0;
 char c[100];
 char sec[100];
 char name[100];
 in.getline(name,100);
  in.getline(sec,100);
  in>>roll>>marks;
cout<<name<<endl<<sec<<endl<<roll<<endl<<marks<<endl;
while(in)
{
     in.getline(name,'\n');
    count1++;

}
cout<<count1;

}

