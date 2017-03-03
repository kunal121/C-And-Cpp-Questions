#include<iostream>
using namespace std;
class swap1
{
public:
    void swap2(int &x,int &y)
    {
        int z;
        z=x;
        x=y;
        y=z;
        cout<<x<<y;
    }

};
int main()
{
    int x,y;
    swap1 s;
    cin>>x>>y;
    s.swap2(x,y);

}
