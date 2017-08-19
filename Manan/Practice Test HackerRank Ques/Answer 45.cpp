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
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char c;
        int k;
        cin>>c;
        switch(c)
        {
        case 'c':
            cin>>k;
            for(int i=0; i<k; i++)
            {
                int tmp = a[0];
                for(int j=0; j<4; j++)
                {
                    a[j]=a[j+1];
                }
                a[4]=tmp;
            }
            break;
        case 'p':
            cin>>k;
            cout<<a[k]<<endl;
            break;
        case 'a':
            cin>>k;

            for(int i=0; i<k; i++)
            {
                int tmp = a[4];
                for(int j=4; j>=0; j--)
                {
                    a[j]=a[j-1];
                }
                a[0]=tmp;
            }
            break;
        }
    }
    return 0;
}
