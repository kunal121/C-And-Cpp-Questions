
#include<iostream>
using namespace std;
main()
{
int a[5],b[5],*ptr1,*ptr2;
ptr1=a;
ptr2=b;
for(int i=0;i<5;i++)
{
    cin>>ptr1[i]>>ptr2[i];
}
for(int i=0;i<5;i++)
{
cout<<&a[i]<<&b[i];
}
}
