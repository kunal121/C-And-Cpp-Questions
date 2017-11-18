#include<iostream>
using namespace std;
void disp(int *a,int *b);
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    disp(&a,&b);
}
void disp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"Swapped numbers are"<<*a<<" "<<*b;
}
