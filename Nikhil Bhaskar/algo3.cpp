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
class diff
    {
    public:
  diff(int a0,int a1,int a2,int b0,int b1,int b2)
      {
      int sum,flag;
      if(a0>b0)
          sum++;
      else if(b0>a0)
          flag++;
    //  else
      //    cout<<" ";

      if(a1>b1)
          sum++;
      else if(b1>a1)
          flag++;
      //else
        //  cout<<" ";

      if(a2>b2)
          sum++;
      else if(b2>a2)
          flag++;
      //else
          //cout<<" ";
     cout<<sum<<"\t"<<flag;

  }
};

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    diff ob(a0,a1,a2,b0,b1,b2);
    return 0;
}
