#include<iostream>
using namespace std;
class student
{
    int rn;
protected:
    char course[10];
public:
    void get_rn()
    {
        cin>>rn;
    }
    int set_rn()
    {
        return rn;
    }
};
class result:student
{
    int marks[3];
public:
    void get()
    {
        //cin>>rn;
        cout<<"Enter roll number"<<endl;
        get_rn();
        cout<<"Enter course"<<endl;
        cin>>course;
        for(int i=0;i<=2;i++)
        {
            cout<<"Enter marks \n";
            cin>>marks[i];
        }
    }
        int total()
        {
            int s=0;
            for(int i=0;i<=2;i++)
        {
            s=s+marks[i];
        }
        return s;
        }

    void disp()
    {
        cout<<set_rn()<<endl;
        cout<<course<<endl;
        cout<<total()<<endl;
    }
};
main()
{
    result s1;
    s1.get();
    s1.disp();
   /* s1.course();
    s1.get_rn();
    s1.set_rn();
    s1.marks(1);*/
}

