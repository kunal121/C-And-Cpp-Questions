#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int a[100];
    int flag=0,i;
    int j=0;
    char temp;
    int k=-1;
    int count=0;
    getline(cin,s);

    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {

        }
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<s.length()-1-i;j++)
        {
            if(s[j+1]<s[j])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(char i='a';i<='z';i++)
    {
        for(j=0;j<s.length();j++)
        {
        if(s[j]==i)
        {
            count++;
            i++;
        }
        }
    }


    if(count==26)
    {
        cout<<"pangram";
    }
    else
    {
        cout<<"not pangram";
    }
    return 0;
}
