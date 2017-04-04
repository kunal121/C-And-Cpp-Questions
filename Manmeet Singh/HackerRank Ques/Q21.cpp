#include <iostream>

using namespace std;
class employee {
protected:
int id;
char name[20];
char des[20];
public:
void get_emp_data();
void show_emp_data();
};
void employee::get_emp_data(){
    cin>>id>>name>>des;
}

void employee::show_emp_data(){
    cout<<id<<endl<<name<<endl<<des<<endl;
}

class contract:public employee{
    protected:
    int hr,wa;
    public:
    void get_cont_data(){
        get_emp_data();
        cin>>hr>>wa;
    }
    void show_cont_data(){
        show_emp_data();
        cout<<hr*wa<<endl;
    }
};

class permanent:public employee{
  protected:
  int bs,hra,ta,da=0;
  public:
    void get_per_data(){
        cin>>bs>>hra>>ta;
    }

    void show_per_data(){
        int da=bs/10;
        cout<<bs+bs+hra+ta+da;
    }

};

int main() {
contract c;
c.get_cont_data();
permanent p;
p.get_per_data();
c.show_cont_data();
p.show_per_data();
return 0;
}
