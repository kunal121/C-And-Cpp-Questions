
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
using namespace std;
class bus
    {
    int a;
    public:
    bus(int n)
        {
        if(n%2==0)
            {
            if(n>=2 && n<=5)
                cout<<"Not Weird";
            if(n>=6 && n<=20)
                cout<<"Weird";
            if(n>20)
                cout<<"Not Weird";

        }
        else
            {
            cout<<"Weird";
        }
        }

};

int main(){
    int N;
    cin >> N;
    bus ob(N);
    return 0;
}
