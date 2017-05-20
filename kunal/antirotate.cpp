#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<1;i++)
    {
        for(int j=n-1;j>0;j--)
        {
        int temp;
         temp=a[j];
         a[j]=a[j-1];
         a[j-1]=temp;
        }
    }

    for(int i=0;i<n;i++)
    {
      cout<<a[i] << endl;
    }
}

