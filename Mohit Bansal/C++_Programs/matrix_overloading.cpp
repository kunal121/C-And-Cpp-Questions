#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    int i,j;
    void input()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>a[i][j];
        }
    }
    matrix operator+(matrix c)
    {
        matrix t;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                t.a[i][j]=a[i][j]+c.a[i][j];
        }
        return t;
    }
    matrix operator-(matrix c)
    {
        matrix t;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                t.a[i][j]=a[i][j]-c.a[i][j];
        }
        return t;
    }
    void display()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
        cout<<"\n";
        }
    }
};
int main()
{
    matrix m1,m2,m;
    m1.input();
    m2.input();
    m=m1+m2;
    m.display();
    m=m1-m2;
    m.display();
}
