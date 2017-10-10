#include<iostream>
using namespace std;
class bhav
{
public:
    int i,front=-1,rear=-1,siz,arr[200],temp;
    void initz()
    {
        cout<<"Enter size of queue\n";
        cin>>siz;
    }
    void insert()
    {
        if(front==-1||rear==-1)
        {
            cout<<"Enter element\n";
            cin>>temp;
            rear+=1;
            arr[rear]=temp;
            front+=1;
        }
        else if(rear<siz-1)
        {
            rear+=1;
            cout<<"Enter element\n";
            cin>>temp;
            arr[rear]=temp;
        }
        else
        {
            cout<<"Overflow"<<endl;
        }
    }

    void disp()
    {
        if(front>=0)
        {
            for(i=front; i<=rear; i++)
            {
                cout<<i<<"<"<<arr[i]<<"\t"<<endl;
            }
            cout<<endl;
        }
        cout<<"Front: "<<front<<"\nRear "<<rear<<endl;


    }
    void del()
    {
        if(front<rear)
        {
            front=front+1;
        }
        else if((front==rear)&&(front!=-1))
        {
            //one element
            front=-1;
            rear=-1;
            //cout<<"\n>Underflow\n";
        }
        else
        {
            front=-1;
            rear=-1;
            cout<<"\nUnderflow\n";
        }

    }
};
int main()
{
    bhav b;
    int c,flag=0;
    b.initz();
    while(1)
    {
        cout<<"1.Insert\t2.Delete\t3.Display\t4.EXIT\n";
        cin>>c;
        switch (c)
        {
        case 1:
            b.insert();
            break;
        case 2:
            b.del();
            break;
        case 3:
            b.disp();
            break;
        default:
            flag=1;
            break;
        }
        if(flag)
        {
            break;
        }
    }
    return 0;
}
