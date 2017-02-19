#include<iostream>
using namespace std;
class abc
{
public:
    int a;
    void operator ++()
    {
        a++;
    }
    /*void operator ++(int)
    {
        a++;
    }*/
};
int main()
{
    abc o1;
    cin >> o1.a;
    ++o1;
    //o1++;
    cout << o1.a;
}
