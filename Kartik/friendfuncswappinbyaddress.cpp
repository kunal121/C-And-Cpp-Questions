#include<iostream>
using namespace std;
class b;
class a
{
    int num;
    public :
    void get()
{
    cin>>num;
}
void disp()
{
    cout<<num<<endl;
}
    friend void swa(a*,b*);

};
class b
{
int num;
    public:
    void get()
{
    cin>>num;
}
void disp()
{
    cout<<num;
}


    friend void swa(a*,b*);

};
void swa(a *obj1, b *obj2)
{

    int t=obj2->num;
    obj2->num=obj1->num;
    obj1->num=t;

}
main()
{
    a obj1;
    b obj2;
    obj1.get();
    obj2.get();
    swa(&obj1,&obj2);
    obj1.disp();
    obj2.disp();
}

