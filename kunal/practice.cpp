#include<iostream>
using namespace std;
class matrix
{
    int a[100][100],i,j,n,m;
public:
    void input()
    {
          cin>>n>>m;
          for(i=0;i<n;i++)
          {
              for(j=0;j<m;j++)
              {
                  cin>>a[i][j];
              }
          }
    }
    void add(matrix o2)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                a[i][j]=a[i][j]+o2.a[i][j];
            }
        }
    }
    void display()
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
};
int main()
{

  matrix o1,o2,o3;
  o1.input();
  o2.input();
  o1.add(o2);
  o1.display();
}
