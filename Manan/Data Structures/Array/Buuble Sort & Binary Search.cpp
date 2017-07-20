#include<iostream>
using namespace std;
void bubbleSort(int *a, int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void binarySearch(int *a,int n,int item)
{
    int mid,flag = 0;
    int start=0,last=n-1;

    for(; start<=last;)
    {
        mid=(last+start)/2;
        if(a[mid]==item)
        {
            flag = 1;
            cout<<a[mid]<<" found at position "<<mid+1;
            break;
        }
        if(a[mid]<item)
            start = mid+1;
        else
            last = mid-1;

        cout<<start<<" "<<mid<<" "<<last<<" \n";
    }
    if(flag == 0)
        cout<<"Item not found";


}
int main()
{
    int n,item,cnt=0;
    cout<<"Enter number of items to be entered...";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter item to be searched";
    cin>>item;
    bubbleSort(a,n);
    binarySearch(a,n,item);
}
