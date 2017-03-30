#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>

using namespace std;
class one
{
protected:
int m;
public:
void get_m();
};
class last:public one
{
    protected:
    int n;
    public:
    void get_n()
    {
        cin>>n;
    }
    void display()
    {
        cout<<m<<"\n";
        cout<<n<<"\n";
        cout<<m*n;
    }
};
void one::get_m()
{
    cin>>m;
}
int main() {
last l;
l.get_m();
l.get_n();
l.display();
return 0;
}

