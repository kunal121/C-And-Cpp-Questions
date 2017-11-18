#include<iostream>
using namespace std;
void sum(int n,int a[][10],int b[][10]);
int main()
{
    int n,i,j;
    cout<<"Enter the size of matrix";
    cin>>n;
    int a[10][10],b[10][10];
    cout<<"Enter the matrix 1";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the matrix 2";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    sum(n,a,b);
}
void sum(int n,int a[][10],int b[][10])
{
    int i,j;
    int c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}
