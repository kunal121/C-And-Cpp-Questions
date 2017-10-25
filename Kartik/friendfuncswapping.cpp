#include<iostream>
using namespace std;
class b;
class a
{
    int num;
    friend void get();
    friend void swa(a,b);
    friend void disp();
};
class b
{
    int num;
    friend void get();
    friend void swa(a,b);
    friend void disp();
};
void swa(a obj1, b obj2)
{

    int t=obj2.num;
    obj2.num=obj1.num;
    obj1.num=t;

}
void get()
{
    a obj1;
    b obj2;
    cin>>obj1.num>>obj2.num;
}
void disp()
{
    a obj1;
    b obj2;
    cout<<obj1.num<<obj2.num;
}

main()
{
    a obj1;
    b obj2;
    get();
    swa(obj1,obj2);
    disp();
}

