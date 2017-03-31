#include<iostream>
using namespace std;
template<class t>
void swapping(t *x,t *y)
{
    t temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
template<class t>
void bubbleSort(t *a,t n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
                swapping(&a[j],&a[j+1]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
