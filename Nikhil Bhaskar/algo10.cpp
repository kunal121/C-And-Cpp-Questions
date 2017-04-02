
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


int main(){
    int n,i,j,temp,count=0,max=0;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];

    }
    for(i=0;i<n;i++)
        {

        if(height[i]>=max)
            {
            max=height[i];

        }
    }
    //cout<<max;
   /* for(i=0;i<n-1;i++)
        {
         for(j=0;j<n-1-i;j++)
             {
             if(height[j]>height[j+1])
                 {
                 temp=height[j];
                 height[j]=height[j+1];
                 height[j+1]=temp;
             }
         }

    }*/
    for(i=0;i<n;i++)
        {
        if(height[i]==max)
            {
            count++;
    }
    }
    cout<<count;

    return 0;
}
