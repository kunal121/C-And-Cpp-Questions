#include<iostream>
using namespace std;
int main()
{
    int a[6],*p,i,num;
    p=a;
    cin>>num;
    for(i=0;i<6;i++)
    cin>>a[i];
     for(i=0;i<6;i++)
    {
        if(*p==num)
        {
            cout<<*p;
        }
        *p++;
    }





}
