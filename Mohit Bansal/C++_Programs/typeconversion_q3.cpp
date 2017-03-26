#include<iostream>
using namespace std;
class student2;
class student1
{
public:
    int rn1,marks[3];
    void getdata()
    {
        int i;
        cin>>rn1;
        for(i=0;i<3;i++)
            cin>>marks[i];
    }
};
class student2
{
    int rn2;
    float avg;
public:
    student2()
    {
        rn2=0;
        avg=0;
    }
    void dis()
    {
        cout<<rn2<<endl;
        cout<<avg;
    }
     student2(student1 c)
    {
        rn2=c.rn1;
        int i;
        for(i=0;i<3;i++)
          {
                avg=+c.marks[i];

            }
            avg/=3;
    }
};
int main()
{
    student1 a;
    student2 b;
    a.getdata();
    b=a;
    b.dis();
}
