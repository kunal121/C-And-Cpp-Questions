#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
    int roll;
    ofstream out("file1");
    cin>>name;
    cin>>roll;
    out<<name<<endl;
    out<<roll;
    out.close();
    ifstream in("file1");
    in>>name;
    in>>roll;
    cout<<name;
    cout<<roll;
}
