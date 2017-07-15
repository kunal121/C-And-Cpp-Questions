#include<iostream>
using namespace std;
int main()
{
    string name;
    int c=0;
    cin>>name;
    for(int i=0;i<name.length();i++)
    {
        if(name[i]!='a'&&name[i]!='e'&&name[i]!='i'&&name[i]!='o'&&name[i]!='u')
        {
            c++;
            if(c==3)
            break;

        }
        else
        c=0;
    }
    if(c==3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
