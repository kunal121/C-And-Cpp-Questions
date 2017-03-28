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
    long long int a,sum;
    long long int b,flag;
    long long int c,result;
    long long int d,add;
    long long int e,addition;
    cin >> a >> b >> c >> d >> e;
    sum=a+b+c+d;
    flag=b+c+d+e;
    result=c+d+e+a;
    add=d+e+a+b;
    addition=e+a+b+c;
    if(sum<flag && sum<result && sum<add && sum< addition)
        cout<<sum<<"\t";
         else if(result<sum && result<flag && result<add && result< addition)
        cout<<flag<<"\t";
         else if(addition<sum && addition<result && addition<add && addition<flag)
        cout<<flag<<"\t";
         else if(add<sum && add<result && add<flag && add< addition)
        cout<<flag<<"\t";
        if(sum>flag && sum>result && sum>add && sum> addition)
        cout<<sum<<"\t";
    else if(flag>sum && flag>result && flag>add && flag> addition)
        cout<<flag;
         else if(result>sum && result>flag && result>add && result> addition)
        cout<<flag;
         else if(addition>sum && addition>result && addition>add && addition>flag)
        cout<<flag;
         else if(add>sum && add>result && add>flag && add> addition)
        cout<<flag;





    return 0;
}
