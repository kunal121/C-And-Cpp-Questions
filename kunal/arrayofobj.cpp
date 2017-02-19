#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    int marks[100];
    int sum=0;
    int i;
    void input()
    {
        cin>>roll;
        for(i=0;i<5;i++)
        {
            cin>>marks[i];
            sum=sum+marks[i];
        }
    }
    void display()
    {
        cout<<"\n"<<sum;
    }
};
int main()
{
    int j;
    student o[5];
    for(j=0;j<5;j++)
    {
        o[j].input();
    }
    for(j=0;j<5;j++)
    {
        o[j].display();
    }


}
