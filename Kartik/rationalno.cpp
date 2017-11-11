#include<iostream>
using namespace std;
class rational
{
    int i,j,z;
public:
    void getval();
    void gcd();
    void print();
};
void rational::getval()
{
    cout<<"Enter the numerator"<<endl;
    cin>>i;
    cout<<"Enter the denominator"<<endl;
    cin>>j;
}
void rational::gcd()
{
    int count=1;
    if(i<j)
    {
        while(count<=i)
        {
            if(i%count==0 && j%count==0)
            {
                z=count;
            }
            count++;
        }
    }
    else
        {
        while(count<=j)
        {
            if(i%count==0 && j%count==0)
            {
                z=count;
            }
            count++;
        }
    }
}
void rational::print()
{
    cout<<"Simplified rational number is "<<i/z<<"/"<<j/z;
}
int main()
{
    rational obj;
    obj.getval();
    obj.gcd();
    obj.print();
}
