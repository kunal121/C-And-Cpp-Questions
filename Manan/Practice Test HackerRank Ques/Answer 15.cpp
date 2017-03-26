#include<iostream>
using namespace std;
class emp
{
protected:
    long int acc_no;
    long int balance;
public:
    void get_data();
    void display();
};
class beneficiary:public emp
{
protected:
    long int b_accno;
    long int b_bal;
    int amt;
public:
    void get_b_data();
    void transfer();
    void print();
};
void emp::get_data()
{
    cin>>acc_no>>balance;
}
void emp::display()
{
    cout<<acc_no<<endl<<balance<<endl;
}
void beneficiary::get_b_data()
{
    get_data();
    cin>>b_accno>>b_bal>>amt;
}
void beneficiary::transfer()
{
    if( balance > amt)
    {
        balance-=amt;
        b_bal+=amt;
        amt = -100;
    }
}
void beneficiary::print()
{
    if(amt==-100)
        cout<<acc_no<<endl<<balance<<endl<<b_accno<<endl<<b_bal;
    else
        cout<<"insufficient balance";
}
int main()
{
    beneficiary ob;
    ob.get_b_data();
    ob.transfer();
    ob.print();

}
