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
    cin>>acc_no;
    cin>>balance;
}
void emp::display()
{
    cout<<acc_no;
}
void beneficiary::get_b_data()
{
    emp::get_data();
    cin>>b_accno;
    cin>>b_bal;
    cin>>amt;
}
void beneficiary::transfer()
{
    balance=balance-amt;
    b_bal=b_bal+amt;
}
void beneficiary::print()
{
    emp::display();
    cout<<"\n";
    cout<<balance<<"\n";
    cout<<b_accno<<"\n";
    cout<<b_bal;
}    int main()
    {
    beneficiary ob;
    ob.get_b_data();
    ob.transfer();
    ob.print();

}
