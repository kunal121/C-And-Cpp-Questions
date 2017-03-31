#include <iostream>
#include <string.h>
using namespace std;
class bill
{
protected:
    int item_code[30],price[30],total=0;
public:
    bill(int *c,int *p)
    {
        for(int i=0; i<5; i++)
        {
            item_code[i] = c[i];
            price[i] = p[i];
            total = total + p[i];
        }
    }

};
class cash:public bill
{
    int deno[30],value[30],num;
public:
    cash(int *c,int *p,int *d,int *v,int n):bill(c,p)
    {
        num = n;
        for(int i=0; i<n; i++)
        {
            deno[i] = d[i];
            value[i] = v[i];
        }
    }
    void show_cash()
    {
        cout<<total<<endl<<"notes="<<num<<endl;
        for(int i=0; i<num; i++)
        {
            cout<<deno[i]<<endl<<value[i]<<endl;
        }
    }
};
class cheque:public bill
{
    char bank_name[30];
    int chec_no;
public:
    cheque(int *c,int *p,int chec,char *name):bill(c,p)
    {
        strcpy(bank_name,name);
        chec_no = chec;
    }
    void show_check()
    {
        cout<<total<<endl;
        cout<<chec_no<<endl;
        cout<<bank_name<<endl;
    }
};
int main()
{
    int option,n;
    cin>>n;
    int c[n+1],p[n+1];
    for(int i=0; i<n; i++)
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
        for(int i=0; i<num; i++)
        {
            cin>>d[i]>>v[i];
        }
        cash c1(c,p,d,v,num);
        c1.show_cash();
    }
}
