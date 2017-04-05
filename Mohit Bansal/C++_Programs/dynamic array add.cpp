#include<iostream>
using namespace std;
class matrix
{
    int **a,r,**b,**c;
public:

    matrix()
    {
       cin>>r;
       a= new int *[r];
       for(int i=0;i<r;i++)
        a[i]=new int[r];
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<r;j++)
           {
               cin>>a[i][j];
           }
       }
        b= new int *[r];
       for(int i=0;i<r;i++)
        b[i]=new int[r];
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<r;j++)
           {
               cin>>b[i][j];
           }
       }
       c= new int *[r];
       for(int i=0;i<r;i++)
        c[i]=new int[r];
    }
    ~matrix()
    {
        for(int i=0;i<r;i++)
            delete []a;
        delete a;

    }
    void operator+()
    {
        for(int i=0;i<r;i++)
       {
           for(int j=0;j<r;j++)
           {
               c[i][j]=a[i][j]+b[i][j];
               cout<<c[i][j]<<endl;
           }
       }
    }
};
int main()
{
    matrix o;
    +o;`
}
