#include <iostream>
#include<string.h>
using namespace std;
class bill
{
	protected:
    int i,item_code[20],price[20],total=0;
public:
    bill(int c[20],int p[20])
        {
        for(i=0;i<5;i++)
            {
            item_code[i]=c[i];
            price[i]=p[i];
            total=total+price[i];
        }
    }
};
class cash:public bill
{
    protected:
        int i,deno[10],value[10],numb;
    public:
        cash(int c[20],int p[20],int d[10],int v[20],int num):bill(c,p)
            {
            numb=num;
            for(i=0;i<numb;i++)
                {
                deno[i]=d[i];
                value[i]=v[i];
            }
        }
    void show_cash()
        {
        cout<<total<<"\n";
        cout<<"notes="<<numb<<"\n";
        for(i=0;i<numb;i++)
            {
            cout<<deno[i]<<"\n"<<value[i]<<"\n";
        }
    }
};
class cheque:public bill
{
    protected:
        int chec_no;
        char bank_name[30];
    public:
        cheque(int c[20],int p[20],int c_num,char name[30]):bill(c,p)
            {
            chec_no=c_num;
            strcpy(bank_name,name);
        }
    void show_check()
        {
        cout<<total<<"\n"<<chec_no<<"\n"<<bank_name;
    }
};
int main()
{
    int i,n,c[20],p[20],option;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>c[i]>>p[i];
    }
    cin>>option;
     if(option==1)
    {
        char name[30];
        int c_num;
        cin>>c_num;
     cin.ignore();
        cin.getline(name,30);
        cheque c2(c,p,c_num,name);
        c2.show_check();
    }
    else
    {
        int num,d[10],v[10];

    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>d[i]>>v[i];
    }
    cash c1(c,p,d,v,num);
    c1.show_cash();
    }
}
