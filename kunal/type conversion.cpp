#include<iostream>
using namespace std;
class Array
{
   int a[10],i;
   public:
       Array(int b[10])
       {
           for(i=0;i<5;i++)
           {
               a[i]=b[i];
           }
       }
       operator int()
       {
           int sum=0;
           for(i=0;i<5;i++)
           {
               sum=sum+a[i];
           }
           return sum;
       }
       operator float()
       {
           float avg;
           float total;
           for(i=0;i<5;i++)
           {
               total=total+a[i];
           }
           avg=total/5;
           return avg;
        }
        void display()
        {
            for(i=0;i<5;i++)
            {
                cout<<a[i];
            }
        }
};

int main()
{
    int a[10],i,n;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    Array arr(a);
    arr.display();
    int sum=arr;
    cout<<"sum="<<sum;
    float avg=arr;
    cout<<"avg="<<avg;
}
