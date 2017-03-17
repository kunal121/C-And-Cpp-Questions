#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    try
    {
        int z = x - y;
        if(z < 0)
            throw z;
    }
    catch(int i)
    {
        cout << "Illegal output : " << i;
    }
}
