#include<iostream>
using namespace std;
int n;
void insertFunc(int *a)
{
    int pos,num;
    n++;
    cout<<"Enter position and number to be entered";
    cin>>pos;
    cin>>num;
    pos--;
    for(int i=n-1; i>pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=num;

}
void deleteOne(int *a)
{
    int pos;
    cout<<"Enter position to be deleted...\n";
    cin>>pos;
    if(pos>n)
    {
        cout<<"Position is not valid\n";
        return;
    }
    for(int i=pos; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
int Find(int *a)
{
    int item;
    cout<<"Enter item... ";
    cin>>item;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==item)
        {
            cout<<a[i]<<" is present at position "<<i+1;
            cnt=1;
            return i;
        }
    }
    if(cnt==0)
        cout<<"Item not found\n";
    return 0;
}

void deleteTwo(int *a)
{
    int r = Find(a);
    if(r!=0)
    {
        cout<<" and will be deleted\n";
        for(int i=r; i<n; i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
}
void display(int *a)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<"\n";
}

int main()
{
    int item,cnt=0;
    cout<<"Enter number of items to be entered...";
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++)
        cin>>a[i];
    item=1;
    while(item)
    {
        cout<<"Enter action to be performed...\n"
            <<"1.Insert at specific position\n"
            <<"2.Delete from specific position\n"
            <<"3.Delete a number\n"
            <<"4.Find position\n"
            <<"5.Display\n";
        cin>>item;
        switch(item)
        {
        case 1:
            insertFunc(a);
            break;
        case 2:
            deleteOne(a);
            break;
        case 3:
            deleteTwo(a);
            break;
        case 4:
            Find(a);
            break;
        case 5:
            display(a);
            break;
        default:
            break;
        }
    }
}

