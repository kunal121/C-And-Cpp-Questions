#include<iostream>
using namespace std;
class point
{
    int a,b,c,d;
public:
    point()
    {
        a=0;
        b=0;
        c=0;
        d=0;
    }
    point(int x,int y)
    {
        a=x;
        b=y;
    }
    point operator+(point o)
    {
        return point(a+o.a,b+o.b);
    }
    point operator-(point o)
    {
        return point(a-o.a,b-o.b);
    }
    point operator/(point o)
    {
        return point(a/o.a,b/o.b);
    }

    void display()
    {
        cout<<a <<b <<endl;
    }

};
int main()
{
    int d,e,f,g;
    cin>>d>>e>>f>>g;
    point o;
    point o1(d,e),o2(f,g);
    o=o1+o2;
    o.display();
    o=o1-o2;
    o.display();
    o=o1/o2;
    o.display();
}
