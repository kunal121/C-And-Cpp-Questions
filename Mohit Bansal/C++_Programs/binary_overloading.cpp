#include<iostream>
using namespace std;
class points
{
    float x,y;
public:
    points()
    {
        x=0;
        y=0;
    }
    points(float a,float b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<"\n"<<y<<"\n";
    }
    points operator+(points c)
    {
       /* points t;
        t.x=x+c.x;
        t.y=y+t.y;
        */
        return points(x+c.x,y+c.y);
    }
    points operator-(points c)
    {
       /* points t;
        t.x=x-c.x;
        t.y=y-t.y;
        */
        return points(x-c.x,y-c.y);
    }
    points operator/(points c)
    {
       /* points t;
        t.x=x/c.x;
        t.y=y/t.y;
        */
        return points(x/c.x,y/c.y);
    }
    /* friend complex operator+(complex c1,complex c2)
    return comples(c1.x+c2.x,c1.y+c2.y)
    */                                                 //when using friend function
};
int main()
{
    float a,b,e,d;
    cin>>a>>b>>e>>d;
    points c;
    points c1(a,b),c2(e,d);
    c=c1+c2;  //c=operator+(c1,c2) when using friend function
    c.display();
    c=c1-c2;
    c.display();
    c=c1/c2;
    c.display();
}
