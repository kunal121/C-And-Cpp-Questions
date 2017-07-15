#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int size;
cin>>size;
int a[size];
int m;
int c=0;
for(int i=0;i<size;i++)
    cin>>a[i];
int i,j;
for(i=0;i<size;i++)
{
    m=0;
    for(j=0;j<=i;j++)
    {
        m=m^a[j];
    }
    if(m==n)
        c++;
}
cout<<c;


}
