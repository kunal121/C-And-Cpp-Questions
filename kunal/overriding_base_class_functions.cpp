#include<iostream>
using namespace std;
class mother
{
public:
    void display()
    {
        cout<<"mother display function\n";
    }
};
class daughter
{
public:
    void display()
    {
        cout<<"daughter display function\n";
    }
};
int main()
{
    daughter rita;
    rita.display();//we can override member function of base class
    return 0;
}

