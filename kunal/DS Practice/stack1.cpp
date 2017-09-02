#include<iostream>

using namespace std;
//# define max=10000;
int top=-1;
int arr[10000];
void push(int value)
{
    arr[++top]=value;
}
void pop()
{
    top=top-1;
}
void display()
{
    for (int i=0;i<=top;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
  int value,n1,n;
  while(1){
  cin>>n;
  switch(n)
  {
   case 1:
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
      cin>>value;
      push(value);
    }
   break;
   case 2:
    pop();
    break;
   case 3:
    display();
    break;

  }
  }

}
