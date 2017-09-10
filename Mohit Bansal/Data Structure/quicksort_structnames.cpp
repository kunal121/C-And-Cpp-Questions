#include<iostream>
#include<string.h>
using namespace std;
void swap1(int *arr,int j,int l)
{
    int t=arr[j];
    arr[j]=arr[l];
    arr[l]=t;
}
void quicksort(int *arr,int len)
{
    if(len<=1)
        return;
    int j=-1;
    int pivot=arr[len-1];
    int i=0;
    for(;i<len;i++)
    {
        if(arr[i]<pivot)
        {
            swap1(arr,++j,i);
        }
    }
    swap1(arr,++j,len-1);
    quicksort(arr,j);
    quicksort(arr+j+1,len-j-1);
}

int main()
{
    int len=10;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
}
