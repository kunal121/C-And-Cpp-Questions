#include<iostream>
using namespace std;
class mat
{
int size,a[100][100];
public:
void input()
{
    cout<<"Enter size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }
}
void output()
{
    cout<<"Matrix is "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
friend mat operator +(mat a,mat b);
};
mat operator +(mat a,mat b)
{
     mat z;
     z.size=a.size;
    for(int i=0;i<a.size;i++)
    {
        for(int j=0;j<a.size;j++)
        {
            z.a[i][j]=a.a[i][j]+b.a[i][j];
        }
    }
    return z;
}
int main()
{
    mat A,B,C;
    A.input();
    B.input();
    C=A+B;
    C.output();
    return 0;
}
