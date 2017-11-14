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
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
