#include<iostream>
using namespace std;
int arr[1000],front=-1,rear=-1;

void add(int value)
{
    if(front==-1)
    {
        front=0;
        rear=0;
        arr[rear]=value;
    }
    else
    {
      arr[++rear]=value;
    }
}

void del()
{
    if(front==rear)
    {
      cout<<"list is empty";
    }
    front=front+1;
}

void display()
{
    for (int i=front;i<=rear;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n,value;
    cout<<"enter what you want to perform"<<endl;

    while(1){
        cin>>n;
        switch(n){
       case 1:
        cout<<"enter the value"<<endl;
        cin>>value;
        add(value);
        cout<<"value successfully added"<<endl;
        break;

       case 2:
        del();
        break;

       case 3:
        display();
        break;
        }
    }

}
