/**
*   This program demonstrates the working of a base class pointer.
*   A child class is made which inherits from parent class.
*   In main function a pointer to base class object is made and it can be used to call the functions of the base class
*   But it cannot directly call
*/
#include<iostream>
using namespace std;
class parent
{
public:
    int x;
    void input()
    {
        cin >> x;
    }
    void display()
    {
        cout << x;
    }
};
class child:public parent
{
public:
    int y;
    void input1()
    {
        cin >> y;
    }
    void display1()
    {
        cout << y;
    }
};
int main()
{
    parent *p = new parent;
    p-> input();
    static_cast<child*>(p)->input1();
    p->display();
    static_cast<child*>(p)->display1();
    return 0;
}
