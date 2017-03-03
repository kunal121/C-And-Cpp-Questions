#include<iostream>
using namespace std;
class matrix
{
    int r,c,m[10][10];
public:

    matrix()
    {
        r=2;
        c=2;
    }

    matrix(int x,int y)
    {
        r=x;
        c=y;
    }
    void getData()
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                cin>>m[i][j];
        }
    }

    matrix operator+(matrix &ob)
    {
        matrix temp;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                temp.m[i][j]=ob.m[i][j]+m[i][j];
        }
        return temp;

    }
    matrix operator-(matrix &ob)
    {
        matrix temp;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                temp.m[i][j]=ob.m[i][j]-m[i][j];
        }
        return temp;
    }

    matrix operator*(matrix &ob)
    {
        matrix temp;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                for(int k=0; k<c; k++)
                    temp.m[i][j]=m[i][j]+m[i][k]*ob.m[k][j];
            }
        }
        return temp;

    }

    void display()
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                cout<<m[i][j]<<" ";
            cout<<"\n";
        }

    }
};
int main()
{
    matrix m1(2,2),m2(2,2),m3(2,2);
    m2.getData();
    m3.getData();
    m1=m2+m3;
    m1.display();
    m1=m2 - m3;
    m1.display();
    m1 = m2 * m3;
    m1.display();
}
