#include <iostream>
#include<string>

using namespace std;
class employee
{
protected:
int id;
char name[20];
char des[20];
public:
void get_emp_data();
void show_emp_data();
};
void employee::get_emp_data()
{
    cin>>id>>name>>des;
}
void employee::show_emp_data()
{
    cout<<id<<"\n";
    cout<<name<<"\n";
    cout<<des<<"\n";
}
class contract:public employee
{
    public:
    int wh,wages,bp;
    public:
     void get_cont_data()
     {
         employee::get_emp_data();
         cin>>wh>>wages;
     }
     void show_cont_data()
     {
         employee::show_emp_data();
         cout<<wh*wages<<"\n";
     }
};
class permanent:public contract
{
    protected:
    int hra,ta,total,da;

    public:
    void get_per_data()
    {
        cin>>bp>>hra>>ta;
    }
    void show_per_data()
    {

       da=.1*bp;
       total=hra+da+ta+bp+bp;
        cout<<total<<"\n";
    }
};
int main()
{
contract c;
c.get_cont_data();
permanent p;
p.get_per_data();
c.show_cont_data();
p.show_per_data();
return 0;
}

