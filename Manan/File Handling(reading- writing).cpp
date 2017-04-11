#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
    int roll;
    ofstream out("file.txt");
    cin>>name;
    cin>>roll;
    out<<name<<endl;
    out<<roll;
    ifstream in("file");
    in>>name;
    in>>roll;
    cout<<name<<endl;
    cout<<roll;
    in.close();
}
