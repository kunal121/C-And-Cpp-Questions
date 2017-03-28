#include <iostream>
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
class contract:public employee
{
    int no_of_hrs,wages;
public:
    void get_cont_data()
    {
        get_emp_data();
        cin>>no_of_hrs>>wages;
    }
    void show_cont_data()
    {
        cout<<id<<endl<<name<<endl<<des<<endl<<no_of_hrs*wages<<endl;
    }
};
class permanent:public employee
{
    int basic_salary,hra,ta,da;
public:
    void get_per_data()
    {
        cin>>basic_salary>>hra>>ta;
        da = 0.1*basic_salary;
    }
    void show_per_data()
    {
        cout<<2*basic_salary+hra+ta+da;
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
