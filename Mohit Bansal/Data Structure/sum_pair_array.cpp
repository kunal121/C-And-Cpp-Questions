#include<iostream>
using namespace std;
int main()
{
    int count = 0,n;
    int sum;
    cout<<"Enter no of elements req\n";
    cin>>n;
    int a[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter sum required\n";
    cin>>sum;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]+a[j] == sum)
                count++;
        }
    }
    if(count>0)
        cout <<"No of Pairs="<< count;
    else
        cout<<"No pairs found";

    return 0;
}
