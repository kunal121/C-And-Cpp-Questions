#include<iostream>
using namespace std;
int main()
{
    int n,item,cnt=0;
    cout<<"Enter number of items to be entered...";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter item to be searched";
    cin>>item;
    for(int i=0;i<n;i++)
    {
        if(a[i]==item){
            cout<<a[i]<<" is present at position "<<i+1;
            cnt=1;
            break;
        }
    }
    if(cnt==0)
        cout<<"Item not found";
}
