#include<iostream>
using namespace std;
class student
{
    int roll,marks[5];
public:
    void input()
    {
        int i;
        cout<<"enter rollno.";
        cin>>roll;
        cout<<"enter marks";
        for(i=0;i<5;i++)
            cin>>marks[i];
    }
    void display()
    {
        int total=0,i;
        for(i=0;i<5;i++)
            total+=marks[i];
        cout<<"roll no\ttotal marks\n";
        cout<<roll<<"\t"<<total;
    }
}s[100];
int main()
{
    int n,i;
    cout<<"enter how many students req\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].input();
        cout<<"\n";
        s[i].display();
    }
}
