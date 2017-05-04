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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e,g,s;
    cin >> a >> b >> c >> d >> e;
    long int arr1[5],arr[5],sum=0,i;
    arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;arr[4]=e;
    for(i=0;i<5;i++)
        {
        sum=sum+arr[i];
    }
   // cout<<sum<<endl;
    for(i=0;i<5;i++)
        {
        arr1[i]=sum-arr[i];
       // cout<<arr1[i]<<"  ";
    }
    g = 0;
    s = arr1[0];
    for(i=0;i<5;i++)
        {
        if(g<arr1[i])
            {
            g=arr1[i];
        }
        else if(s>arr1[i])
            {
            s=arr1[i];
        }
    }
    cout<<s<<" "<<g;
    return 0;
}
