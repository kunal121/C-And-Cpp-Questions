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
}
class cheque:protected bill
{
    protected:
        int cheque_no,cheque_amt;
    public:
        void get_cheque_details()
            {
            get_bill();
            cin>>cheque_no>>cheque_amt;
        }
    void display()
        {
        bill=item_price*qty;
        cout<<bill<<"\n";
        if(bill>cheque_amt)
            cout<<"Balance="<<bill-cheque_amt;
        else
            cout<<"Clear";
    }
};
class cash:protected bill
{
    protected:
        int a,b,c,d;
    public:
     void get_cash()
            {
            get_bill();
            cin>>a>>b>>c>>d;
        }
    void display()
        {
        bill=item_price*qty;
        int x=(500*a)+(100*b)+(10*c)+(1*d);
        cout<<bill<<"\n";
        if(bill>x)
            cout<<"Balance="<<bill-x;
        else
            cout<<"Clear";
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
}
