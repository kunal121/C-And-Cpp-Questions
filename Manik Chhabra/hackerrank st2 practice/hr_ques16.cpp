#include <iostream>
using namespace std;
class one
{
protected:
    int m;
public:
    void get_m();
};
void one::get_m()
{
    cin>>m;
}
class two
{
protected:
    int n;
public:
    void get_n()
    {
        cin>>n;
    }
};
class last:public one,public two
{
public:
    void display()
    {
        cout<<m<<endl<<n<<endl<<m*n;
    }
};
int main()
{
    last l;
    l.get_m();
    l.get_n();
    l.display();
}
