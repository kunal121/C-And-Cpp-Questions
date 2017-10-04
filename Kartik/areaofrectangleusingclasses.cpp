#include<iostream>
using namespace std;
class area
{
    int l,b,ar;
public:
    void getval();
    void calc();
    void print();
};
void area::getval()
{
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;
}
void area::calc()
{
    ar=l*b;
}
void area::print()
{
    cout<<"The area of rectangle is "<<ar;
}
int main()
{
    area obj;
    obj.getval();
    obj.calc();
    obj.print();
}
