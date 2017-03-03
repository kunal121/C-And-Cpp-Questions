#include<iostream>
using namespace std;
class parent
{
    int a;
public:
    int b;
protected:
    int c;
};
class child:protected parent
{
public:
    void input()
    {
        //cin >> a; <<-- This is not possible as a variable is private.
        cin >> b; //<<-- This is possible as b variable is public.
        cin >> c; //<<-- This is possible as c variable is protected and protected members can be accessed in the inherited class but cannot be accessed outside the class
    }
    void display()
    {
        //cout << a;
        cout << b;
        cout << c;
    }
};
int main()
{
    child object1;
    object1.input();
    //cin >> object1.b;
    object1.display();
}
