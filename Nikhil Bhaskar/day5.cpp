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
class captain_america
    {
    public:
    captain_america(int n);
};
captain_america::captain_america(int n)
    {
     int result,i;
    for(i=1;i<=10;i++)
        {
        result=n*i;
        cout<<n<<"\t";
        cout<<"x"<<"\t";
        cout<<i<<"\t";
        cout<<"="<<"\t";
        cout<<result<<endl;
    }

}

int main(){
    int n;
    cin >> n;
    captain_america ob(n);
    return 0;
}
