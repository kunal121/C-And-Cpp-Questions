#include<iostream>
using namespace std;
class emp
{
    int eno;
    char ename[50];
    int bsalary;l
    float finalsal;
public:
    void get();
    void total();
    void disp()
    {
        cout<<"Final salary of "<<ename<<" "<<eno<<" is "<<finalsal;
    }
};
void emp::get()
{
    cout<<"Enter the name of employ"<<endl;
    cin>>ename;
    cout<<"Enter the eno"<<endl;
    cin>>eno;
    cout<<"Enter the basic salary"<<endl;
    cin>>bsalary;
}
void emp::total()
{
    float hra,da;
    if(bsalary>15000)
    {
        hra=0.1*bsalary;
        da=0.08*bsalary;
    }
    else
    {
        hra=0.08*bsalary;
        da=0.05*bsalary;
    }
    finalsal=bsalary+hra+da;
}
int main()
{
    emp obj1;
    obj1.get();
    obj1.total();
    obj1.disp();
}
