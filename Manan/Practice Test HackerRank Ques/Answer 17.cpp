#include <iostream>
using namespace std;
class customer
{
protected:
    int c_no;
    char name[20];
    int qty;
    int price;
    float discount;
    float net_price;
public:
    void input();
};
class seller :public customer
{
public:
    float total_price;
    void caldiscount();
    void show();
};

void customer::input()
{
    cin>>c_no>>name>>qty>>price;
}
void seller::caldiscount()
{
    input();
    total_price = qty * price;
    if(total_price >= 50000)
        discount = 0.25 * total_price;
    else if(total_price >=25000 && total_price<50000)
        discount = 0.15 * total_price;
    else if(total_price <= 25000)
        discount = 0.1 * total_price;
    net_price = total_price - discount;
}
void seller::show()
{
    cout<<c_no<<endl<<name<<endl<<qty<<endl<<price<<endl<<total_price<<endl<<discount<<endl<<net_price;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    seller ob;
    ob.caldiscount();
    ob.show();
    return 0;
}
