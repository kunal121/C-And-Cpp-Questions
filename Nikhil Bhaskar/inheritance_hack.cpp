#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
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
     // cin>>item_price>>qty;
     // bill=item_price*qty;
    }
class cheque:protected bill
{
    public:
    int item,quantity,chk_no,amt,total,paid;
 void get_cheque_details()
     {
     cin>>item>>quantity>>chk_no>>amt;
     total=item*quantity;
     paid=total-amt;
     }
    void display()
        {
        if(paid==0)
            cout<<total<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
    }
};
class cash:protected bill
{
     public:
    int item,quantity,note_500,note_100,note_10,note_1,total,paid,add;
 void get_cash()
     {
     cin>>item>>quantity>>note_500>>note_100>>note_10>>note_1;
     note_500=note_500*500;
     note_100=note_100*100;
     note_10=note_10*10;
     note_1=note_1*1;
     add=item*quantity;
     total=note_500+note_100+note_10+note_1;
     paid=add-total;
 }
    void display()
        {
        if(paid==0)
            cout<<total<<endl<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
    }
};
void bill::get_bill()
    {
     // cin>>item_price>>qty;
     // bill=item_price*qty;
    }
class cheque:protected bill
{
    public:
    int item,quantity,chk_no,amt,total,paid;
 void get_cheque_details()
     {
     cin>>item>>quantity>>chk_no>>amt;
     total=item*quantity;
     paid=total-amt;
     }
    void display()
        {
        if(paid==0)
            cout<<total<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
    }
};
class cash:protected bill
{
     public:
    int item,quantity,note_500,note_100,note_10,note_1,total,paid,add;
 void get_cash()
     {
     cin>>item>>quantity>>note_500>>note_100>>note_10>>note_1;
     note_500=note_500*500;
     note_100=note_100*100;
     note_10=note_10*10;
     note_1=note_1*1;
     add=item*quantity;
     total=note_500+note_100+note_10+note_1;
     paid=add-total;
 }
    void display()
        {
        if(paid==0)
            cout<<total<<endl<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
    }
};
void bill::get_bill()
    {
     // cin>>item_price>>qty;
     // bill=item_price*qty;
    }
class cheque:protected bill
{
    public:
    int item,quantity,chk_no,amt,total,paid;
 void get_cheque_details()
     {
     cin>>item>>quantity>>chk_no>>amt;
     total=item*quantity;
     paid=total-amt;
     }
    void display()
        {
        if(paid==0)
            cout<<total<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
    }
};
class cash:protected bill
{
     public:
    int item,quantity,note_500,note_100,note_10,note_1,total,paid,add;
 void get_cash()
     {
     cin>>item>>quantity>>note_500>>note_100>>note_10>>note_1;
     note_500=note_500*500;
     note_100=note_100*100;
     note_10=note_10*10;
     note_1=note_1*1;
     add=item*quantity;
     total=note_500+note_100+note_10+note_1;
     paid=add-total;
 }
    void display()
        {
        if(paid==0)
            cout<<total<<endl<<"Clear";
        else
        cout<<total<<endl<<"Balance="<<paid;
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
