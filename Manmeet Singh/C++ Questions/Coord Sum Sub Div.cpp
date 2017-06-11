#include<iostream>
using namespace std;

class abc {

    float a,b;

    public:
    abc(){a=0;b=0;}
    abc(float x,float y)
    {
    a=x;
    b=y;
    }
    friend abc operator+(abc ob,abc ob1)
        {
        return abc(ob.a+ob1.a,ob.b+ob1.b);
        }

    friend abc operator-(abc ob,abc ob1)
        {
        return abc(ob.a-ob1.a,ob.b-ob1.b);
        }

    friend abc operator/(abc ob,abc ob1)
        {
        return abc(ob.a/ob1.a,ob.b/ob1.b);
        }
    void display()
        {
        cout<<a<<"\t"<<b<<endl;
        }
};

int main()
{
abc c,c1(10,20),c2(30,40);

c=c1+c2;
c.display();
c=c1-c2;
c.display();
c=c1/c2;
c.display();

}
