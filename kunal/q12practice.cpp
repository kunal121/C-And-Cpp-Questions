#include<iostream>
using namespace std;
int size;
class test
    {

    public:
    long int *arr;
   friend test operator +(test ,test);
      void operator =(test);
};
   test operator +(test o,test o1)
   {
       int i;
       o.arr=new long int [size];
       o1.arr=new long int [size];
       for(i=0;i<size;i++)
       {
           cin>>o.arr[i];

       }
        for(i=0;i<size;i++)
       {
           cin>>o1.arr[i];

       }
       test temp;
       temp.arr=new long int[size];
       for(i=0;i<size;i++)
       {
       temp.arr[i]=o.arr[i]+o1.arr[i];
       }

       return temp;
   }
   void test::operator =(test o1)
   {
       int i;
       for(i=0;i<size;i++)
       {
           if(o1.arr[i]>100)
           {
           cout<<o1.arr[i]-100<<"\n";
           }
           else
           {
               cout<<o1.arr[i]<<"\n";
           }
       }
   }
int main() {
    cin>>size;
    test a1,a2,a3;
    //cin>>a1;
    //cin>>a2;
    a3=a1+a2;
    //cout<<a3;
    return 0;
}
