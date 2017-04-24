#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <char> ch;
    vector <char> :: iterator it;
    char c;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a character";
        cin>>c;
        ch.push_back(c);
    }
    for(it=ch.begin();it!=ch.end();it++)
    {
        cout<<*it;
    }
    ch.erase(ch.begin(),ch.begin()+3);
    for(it=ch.begin();it!=ch.end();it++)
    {
        cout<<*it<<endl;
    }
}
