#include <iostream>
using namespace std;
class bill
{
protected:
    int item_price,qty,bill;
public:
    void get_bill();
};


void bill::get_bill()
{
    cin>>item_price>>qty;
    bill= item_price*qty;
}
class cheque:protected bill
{
public:
    int cheque_no ;
    int cheque_amt;
    void get_cheque_details()
    {
        get_bill();
        cin>>cheque_no>>cheque_amt;
    }
    void display()
    {
        cout<<bill<<endl;
        if(cheque_amt>=bill)
            cout<<"Clear";

        else
            cout<<"Balance="<<bill-cheque_amt;
    }
};
class cash:protected bill
{
public:
    int cash,five,oneH,ten,one;
    void get_cash()
    {
        get_bill();
        cin>>five>>oneH>>ten>>one;
        cash = five*500 +oneH *100 + ten *10 +one;
    }
    void display()
    {
        cout<<bill<<endl;
        if(cash>=bill)
            cout<<"Clear";

        else
            cout<<"Balance="<<bill-cash;
    }
};
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cheque c;
        c.get_cheque_details();
        c.display();
    }
    else
    {
        cash d;
        d.get_cash();
        d.display();
    }
    return 0;
}
