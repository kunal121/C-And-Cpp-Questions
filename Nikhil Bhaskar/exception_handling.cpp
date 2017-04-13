#include<iostream>
using namespace std;
class abc
{
   public:
     int a,b;
     abc(int x,int y)
     {
       a=x;
       b=y;
       cout<<"hello";

     }
     void dis1()
     {
         cout<<"wrong ans";

     }
     void dis2()
     {

         cout<<a<<"\t"<<b;
     }
};


int main()
{
    int x,y;
    cin>>x>>y;


    if(x==0 && y==0)
    {
        throw abc (x,y);

    }
    else{
     //   o.input(x,y);
        o.dis2();
    }
}
catch(abc o1)
{
    o1.dis1();
}
}
