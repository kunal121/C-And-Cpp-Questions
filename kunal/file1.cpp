#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[30];
    ifstream in("file");
    ifstream in1("file1");
    while(in)
    {
        in.getline(str,'\n');
        cout<<str;
    }
    while(in1)
    {
        in1.getline(str,'\n');
        cout<<str;
    }
}
