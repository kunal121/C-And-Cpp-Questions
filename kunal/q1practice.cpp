
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
    bill=qty*item_price;

}
class cheque:protected bill
{
  public:
    int cheque_no,cheque_amt,pending;
  void get_cheque_details()
  {
            get_bill();


      cin>>cheque_no>>cheque_amt;

  }
  void display()
  {
      pending=bill-cheque_amt;
      if(pending<=0)
      {
          cout<<bill<<"\n";
          cout<<"Clear";
      }
      else
      {
          cout<<bill<<"\n";
          cout<<"Balance="<<pending;
      }
  }
};
class cash:protected bill
{
   public:
    int rs500,rs100,rs10,rs1,total,pending;

    void get_cash()
    {
        get_bill();
        cin>>rs500;
        cin>>rs100;
        cin>>rs10;
        cin>>rs1;
        total=rs500*500+rs100*100+rs10*10+rs1*1;

    }
    void display()
    {
        pending=bill-total;
        if(pending<=0)
        {
            cout<<bill<<"\n";
            cout<<"Clear";
        }
        else
        {
            cout<<bill<<"\n";
            cout<<"Balance="<<pending;
        }
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
