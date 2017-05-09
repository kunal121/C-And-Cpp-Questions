#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    char ch='y';
    int num, var;
    cout<<"Enter Number Of Students : ";
    cin>>num;
    int* student=new int[num-1];
    int* marks=new int[num-1];
    int* attendance=new int[num-1];
    for(int i=0;i<num;i++)    {
        marks[i]=0;
        attendance[i]=0;
    }
    for(int i=0;i<num;i++) {
        cout<<"Enter Marks Of "<<i+1<<" Student : ";
        cin>>marks[i];
        cout<<"Enter Attendance Of "<<i+1<<" Student : ";
        cin>>attendance[i];  }
    while (ch=='y'||ch=='Y')  {
        cout<<"Choose One : ";
        cout<<"\n1. Check Marks/Attendance\n2. Exit \n"<<"Your Choice : ";
        cin>>var;
        if(var==1) {
            int roll;
            cout<<"Enter Roll Number : ";
            cin>>roll;
            cout<<"Marks : "<<marks[roll-1]<<"\n";
            cout<<"Attendance : "<<attendance[roll-1];
        }
        if(var==2)
            exit(0);
        cout<<"\nDo You Wish To Continue? (Y or N) : ";
        cin>>ch;
    }  }
