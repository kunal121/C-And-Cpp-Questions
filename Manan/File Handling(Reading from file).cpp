#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[30];
    ifstream in("file.txt");
    ifstream in1("file.txt");
    while(in)
    {
        in.getline(str,'\n');
        cout<<str<<endl;
    }
    while(!in1.eof())
    {
        in1.getline(str,'\n');
        cout<<str<<endl;
    }

}
