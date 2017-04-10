#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[30];
    ifstream in("file.txt");
    while(in)
    {
        in.getline(str,30);
        cout<<str;

    }
    in.close();

}
