#include<iostream>
using namespace std;

class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"In alpha\n";
    }
    void show_alpha()
    {
       cout<<"x = "<<x<<"\n";
    }
};
class beta
{
    float p,q;
public:
    beta(float a,float b)
    {
        p=a;
        q=b+p;
        cout<<"in beta\n";
    }
    void show_beta()
    {
        cout<<"p= "<<p<<"\n";
        cout<<"q= "<<q<<"\n";
    }
};
class gamma:public beta,public alpha
{
    int u,v;
    public:
    gamma(int a,int b,float c):beta(c,c),alpha(2*a)
    {
        u=a;
        v=b;
    }
    void show_gamma()
    {
        cout<<u<<endl<<v<<endl;
    }
};




int main()
{
    int a,b;
    float c;
    cin>>a>>b>>c;
    gamma g(a,b,c);
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}
