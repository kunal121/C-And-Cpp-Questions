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
int size;
class sample
{
public:
    long int *arr;
    friend sample operator +(sample ,sample);

    sample()
    {
        arr=new long int [size];
    }
};

sample operator +(sample o,sample ob)
{
    sample a;
    for(int i=0; i<size; i++)
        cin>>o.arr[i];
    for(int i=0; i<size; i++)
        cin>>ob.arr[i];


    for(int i=0; i<size; i++)
    {
        a.arr[i]=o.arr[i]+ob.arr[i];
        if(a.arr[i]>100)
            a.arr[i]-=100;
        cout<<a.arr[i]<<endl;
    }
    return a;
}
int main()
{
    cin>>size;
    sample a1,a2,a3;
    //cin>>a1;
    //cin>>a2;
    a3=a1+a2;
    //cout<<a3;
    return 0;
}


