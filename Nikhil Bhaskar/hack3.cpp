#include<iostream>
#include<string.h>
using namespace std;

class base
{
public:
    char *name;
    int roll;
    void get();
};
void base::get()
{
    name=new char[100];
    cin.getline(name,100);
    cin>>roll;

}

class internal:public base
{
public:
    int m1,m2,m3,m4;
    void getimarks();
};
void internal::getimarks()
{
    cin>>m1>>m2>>m3>>m4;

}
class external
{
public:
    int e1,e2,e3,e4;
    void getemarks();
};
void external::getemarks()
{
    cin>>e1>>e2>>e3>>e4;

}
class complete_info:public internal,public external
{
   public:
    void display()
    {
         int total;
    total=m1+m2+m3+m4;
     int sum,flag;
    sum=e1+e2+e3+e4;
    flag=sum+total;
    cout<<name<<"\t"<<roll<<"\t"<<total<<"\t"<<sum<<"\t"<<flag<<"\t";
    if(flag<40)
    {
        cout<<"R";
    }
    else if(flag>=41 && flag<=60)
    {
        cout<<"C";
    }
     else if(flag>=61 && flag<=80)
    {
        cout<<"B";
    }
     else if(flag>=81 && flag<=100)
    {
        cout<<"A";
    }



    }

};


int main()
{
    complete_info c;
    c.get();
    c.getimarks();
    c.getemarks();
    c.display();
    return 0;
}
