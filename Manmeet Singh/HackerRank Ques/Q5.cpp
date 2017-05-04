#include <iostream>
#include <string>
using namespace std;
class bill
{
	protected:
		int item_price,qty,bill;
	public:
		void get_bill();
};
void bill::get_bill(){
    int i,b;
    cin>>item_price>>qty;
    bill=item_price*qty;

}
class cheque:protected bill
{
 protected:
    int cheque_no,cheque_amt;
 public:
    void get_cheque_details(){
        get_bill();
        cin>>cheque_no>>cheque_amt;
        }
    void display(){
        cout<<bill;
        if(bill<=cheque_amt)
            cout<<"\nClear";
        else
            cout<<"\nBalance="<<bill-cheque_amt;
    }
};
class cash:protected bill
{
    protected:
        int five,hun,ten,one,total;
    public:
        void get_cash(){
            get_bill();
            cin>>five>>hun>>ten>>one;
            total=five*500+hun*100+ten*10+one;
        }
        void display(){
            cout<<bill;
            if(bill<=total)
                cout<<"\nClear";
            else
                cout<<"\nBalance="<<bill-total;

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
