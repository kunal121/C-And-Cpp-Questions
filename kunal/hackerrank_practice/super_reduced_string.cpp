#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string a;
    int i,j;
    int b;
    cin>>a;
    b=a.length();
    for(i=0;i<b;i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i;j<b;j++)
            {
            a[j]=a[j+2];
            }
            b=b-2;
            i=-1;
        }
     }
    if(b>0)
    {
    for(i=0;i<b;i++)
    {
        cout<<a[i];
    }
    }
    else
    {
        cout<<"Empty String";
    }

    return 0;
}

