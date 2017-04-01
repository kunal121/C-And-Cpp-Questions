#include <string>
#include <iostream>
using namespace std;

class bill
{
    protected:
    int n,*item_code,*price,total=0;
public:
    bill(int *c,int *p){
        item_code=c;
        price=p;

    }
};
 int z;

class cash: public bill{
  int *deno,*value, num,t=0;
    public:
    cash(int *c,int *p,int *d,int *v,int n):bill(c,p){
        deno=d;
        value=v;
        num=n;

    }
    void show_cash(){
     for(int i=0;i<z;i++)
    {
        t=t+price[i];
    }
        cout<<t<<endl<<"notes="<<num<<endl;

        for(int i=0;i<num;i++)
    {

        cout<<deno[i]<<endl<<value[i]<<endl;
    }
    }

};

class cheque: public bill{
    int check_no;
    char *bank_name;
    public:

    cheque (int *c,int *p,int c_num,char *name):bill(c,p){
        check_no=c_num;
        bank_name=name;
    }
    void show_check(){
        cout<<check_no<<endl<<check_no<<endl<<bank_name;
    }
};
int main(){
    int *c,*p,option;
    cin>>z;
    c = new int[z];
    p = new int[z];
    for(int i=0;i<z;i++)
        cin>>c[i]>>p[i];
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
