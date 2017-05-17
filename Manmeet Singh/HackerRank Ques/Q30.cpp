#include <iostream>
#include <string.h>
using namespace std;
class Bill
{
private:
 int item_code[5];
 float price[5];
 float total;
 public:
 Bill(int items[],float p[],int n);
void show_Bill_Details();
};
class Cash_Payment:public Bill
{
    int num;
    public:
    Cash_Payment(int items[],float p[],int n);
    void show_Cash_Payment();
};
class Check_Payment:public Bill
{
    private:
    long int chec_no;
    char bank_name[20];
    public:
    Check_Payment(int items[],float p[],long int cno,char name[],int n);
    void show_Cheque_Payment();
};


Bill::Bill(int items[],float p[],int n){
    total=0;
    for(int i=0;i<n;i++)
        {
        price[i]=p[i];
        item_code[i]=items[i];
        total+=price[i];
    }
}
void Bill::show_Bill_Details(){

    cout<<"TOTAL="<<total;

}
Check_Payment::Check_Payment(int items[],float p[],long int cno,char name[],int n):Bill(items,p,n){
            chec_no=cno;
            strcpy(bank_name,name);
}

void Check_Payment::show_Cheque_Payment(){
    Bill::show_Bill_Details();
    cout<<"\nBANK NAME="<<bank_name<<"\nCHEQUE NUMBER="<<chec_no;
}
Cash_Payment::Cash_Payment(int items[],float p[],int n):Bill(items,p,n){

}

void Cash_Payment::show_Cash_Payment(){
        Bill::show_Bill_Details();
}
int main()
{
    int n,c[10],option;
    float p[10];
    cin>>n; //no of items
    for(int i=0;i<n;i++)
    {
cin>>c[i]; //item code
cin>>p[i];// price
    }
    cin>>option;// by cheque or cash
    if(option==1)
    {
        char name[30];
        long int c_num;
        cin.ignore();
        cin.getline(name,30);// name of bank
cin>>c_num; //cheque number
        Check_Payment Chek(c,p,c_num,name,n);
        Chek.show_Cheque_Payment();
    }
    else
    {

        Cash_Payment CP(c,p,n);
        CP.show_Cash_Payment();
    }
    return 0;
}
