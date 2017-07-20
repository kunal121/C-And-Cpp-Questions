#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,d,i;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    d=d%n;
    for(i=d;i<n;i++)
            cout<<a[i] << " ";
        for(i=0;i<d;i++)
            cout<<a[i]<< " ";
    /*for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    } */


    return 0;
}
