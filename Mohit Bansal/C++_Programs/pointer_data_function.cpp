#include<iostream>
using namespace std;
class test
{
public:
    int x;
    void dis()
    {
        cout<<x;
    }
};
/*int main()
{
    test t;
    test *p;
    p=&t;
    int test::*dp=&test::x;
    t.*dp=20;
    t.dis();
    p->*dp=50;
    p->dis();
}
*/
int main()
{
    test t;
    void (test::*fp)()=&test::dis;
    t.x=20;
    (t.*fp)();

}

