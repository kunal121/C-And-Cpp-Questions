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
#include <algorithm>
#include <unordered_map>
using namespace std;
void sub(int a,int b)
{
    if(b>a)
        throw b;
    else
        cout<<a-b;
}
using namespace std;
int main()
{
    try
    {
        int a,b;
        cin>>a>>b;
        sub(a,b);
    }
    catch(int a)
    {
        cout<<"wrong input";
    }
    return 0;
}
