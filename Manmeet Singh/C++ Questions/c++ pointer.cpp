#include<iostream>
using namespace std;
main()
{
int a[5],*ptr;
// *ptr= new int(5);
ptr=&a[1];
for(int i=0;i<4;i++)
{
    cin>>ptr[i];
}

for(int i=0;i<4;i++)
{
    cout<<*(ptr+i);


}
}
