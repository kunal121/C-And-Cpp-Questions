#include<iostream>
using namespace std;
template <class t>
t bubble(t b[5],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
      for(j=i;j<n-1;j++)
      {
          if(b[j]>b[j+1])
          {
              t temp;
              temp=b[j];
              b[j]=b[j+1];
              b[j+1]=temp;
          }

      }

    }
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
}
int main()
{
    int n,i;
    float a[3];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n);
}
