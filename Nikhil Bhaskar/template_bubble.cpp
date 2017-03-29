#include<iostream>
#include<string.h>
using namespace std;
template<class t>
void sorting(t a[],int n)
{
 int i,j;
 t temp;
 for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;

         }
     }

 }
 for(i=0;i<n;i++)
 {
     cout<<a[i]<<endl;
 }
}




int main()
{
int n,i;
cin>>n;
int a[n];
float b[n];
char name[n];
for(i=0;i<n;i++)
{
 cin>>a[i];
}
for(i=0;i<n;i++)
{
 cin>>b[i];
}
for(i=0;i<n;i++)
{
 cin>>name[i];
}
sorting(a,n);
sorting(b,n);
sorting(name,n);

}
