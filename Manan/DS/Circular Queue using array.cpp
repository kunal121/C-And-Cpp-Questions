//Circular Queue using array
#include<iostream>
using namespace std;
int main()
{
    int f = -1, r = -1,MAX = 5;
    int arr[MAX];
    int c = 1;
    while(c!=0)
    {
        cout<<"1.Add a number\n2.Delete a number\n3.Display the elements\n4.Enter 0 to exit\nEnter the choice..";
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Enter value to be inserted\n";
            int val;
            cin>>val;
            if(f==-1)
            {
                f++;
                r++;
                arr[f] = val;
            }
            else if((f==0 && r == MAX-1)|| (r==f-1))
            {
                cout<<"\nList is full\n\n";
                break;
            }
            else if(r==MAX-1 && f!=0)
            {
                r=0;
                arr[r]=val;
            }
            else
            {
                r++;
                arr[r] = val;
            }

            break;
        case 2:
            if(f==-1)
            {
                cout<<"\nList is empty\n\n";
                break;
            }
            if(f==r)
            {
                f = -1;
                r = -1;
            }
            else if(f == MAX-1)
                f = 0;
            else
                f++;
            break;
        case 3:
            if(f<r)
            {
                for(int i=0; i<=r; i++)
                    cout<<arr[i]<<" ";
                cout<<"\n";
            }
            else
            {
                for(int i=f; i<MAX; i++)
                    cout<<arr[i]<<" ";
                for(int i=0; i<=r; i++)
                    cout<<arr[i]<<" ";
                cout<<"\n";
            }

        }

    }
}
