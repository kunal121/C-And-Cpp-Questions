#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char d[30];
    int count=0;
    ifstream abc("file.txt");
    while(abc)
    {
        abc.getline(d,'\n');
        count++;
    }
    cout << count;
    abc.close();

}

