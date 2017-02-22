#include<iostream>
using namespace std;
class matrix
{
    int **a, r ,c;
public:
    matrix()
    {
        r=2;
        c=2;
         a = new int*[r];
        for(int i = 0; i < r; i++)
            a[i] = new int[c];
    }
    void getData()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    matrix & operator +(matrix & ob)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                a[i][j]=a[i][j] + ob.a[i][j];
            }
        }

        return *this;
    }
    void display()
    {
        cout<<"\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    ~matrix()
    {cout<<"detroying";
        for(int i = 0; i < r; i++)
            delete a[i];
        delete []a;

    }
};
int main()
{

    matrix m1,m2,m3;
    m1.getData();
    m1.display();
    m2.getData();
    m2.display();
    m3=m1+m2;
    m3.display();
}
