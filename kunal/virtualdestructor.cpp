#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"constA"<<endl;
    }
    virtual ~a()
    {
        cout<<"destA"<<endl;
    }
};
class b:public a
{
public:
   b()
   {
       cout<<"constB"<<endl;
   }
   ~b()
   {
       cout<<"DestB"<<endl;
   }
};
int main()
{
    a *ptr=new b;
    delete ptr;
}
