#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int len,coun=0;
    cout<<"ENTER THE STRING"<<endl;
    char z[100];
    cin>>z;
    cout<<"ENTER THE CHAR"<<endl;
    char s;
    cin>>s;
    len=strlen(z);
    for(int i=0;i<len;i++)
    {
        if(s==z[len-1-i])
        {
            coun++;
        }
    }
    cout<<"occurences="<<coun;
}
