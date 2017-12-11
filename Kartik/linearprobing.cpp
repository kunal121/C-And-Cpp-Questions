#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[100]={0};
    int key,j;
    /*for(int i=0;i<n;i++)
    {
        h[i]=0;
    }*/
    for(int i=0;i<n;i++)
    {
        j=0;
        cin>>key;
        while(1)
        {
            int r=((key%n)+j)%n;
            if(h[r]==0)
            {
                h[r]=key;
                break;
            }
            else
                j++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<h[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
