#include<iostream>
using namespace std;
class abc
{
    static int count;
    public:
    abc()
    {
        cout<<"constructor\n";
        count++;
    }
    ~abc()
    {
        cout<<"destructor\n";
        count--;
    }

};
int abc::count;
int main()
{
    cout<<"Inside main";
    cout<<"create first obj";
    abc o;
    cout<<"Inside Block 1";
    cout<<"Create second obj";
    {
    abc o1,o2;
    }
    cout<<"leaving block" ;
    cout<<"Back inside main";
}
