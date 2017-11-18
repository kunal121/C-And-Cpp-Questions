#include<iostream>
using namespace std;
void pattern(int n);
int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    pattern(n);
}
void pattern(int n)
{
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
        {
            cout<<"  ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<"* ";
        }
        for(l=2;l<=i+1;l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
        {
            for(k=1;k<=i;k++)
            {
                cout<<"  ";
            }
            for(j=n-1;j>=i;j--)
            {
                cout<<"* ";
            }
            for(l=n-1;l>i;l--)
            {
                cout<<"* ";
            }

            cout<<endl;
        }
}

