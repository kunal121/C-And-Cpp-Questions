#include<iostream>
using namespace std;
void avg(int n,int *a);
int main()
{
    int arr[10],n,i;
    cout<<"Enter the number of sub";
    cin>>n;
    cout<<"Enter the marks of subjects";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    avg(n,arr);
}
void avg(int n,int *a)
{
    int avg=0,i;
    for(i=0;i<n;i++)
    {
        avg=avg+a[i];
    }
    avg=avg/n;
    cout<<"The avg is "<<avg<<endl;
    if(avg>=90)
    {
        cout<<"Grade is A+";
    }
    else if(avg>=80 && avg<90)
    {
        cout<<"Grade is A";
    }
    else if(avg>=70 && avg<80)
    {
        cout<<"Grade is B+";
    }
    else if(avg>=60 && avg<70)
    {
        cout<<"Grade is B";
    }
    else if(avg>=50 && avg<60)
    {
        cout<<"Grade is C";
    }
    else if(avg>=40 && avg<50)
    {
        cout<<"Grade is P";
    }
    else if(avg<40)
    {
        cout<<"Grade is F";
    }
}
