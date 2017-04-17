#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch;
    char a[30];
    ch = cin.get();
    cout.put(ch);
    cout<<endl;
    cin.ignore();
    cin.getline(a,30);
    cout.write(a,strlen(a));
}
