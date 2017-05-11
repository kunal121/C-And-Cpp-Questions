include <map>
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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rem,temp=1,num,sum=0;
    int tc,ptc;
    cin>>tc;
    int i;
    /*while(num){
        rem=num%2;
        sum=sum+rem*temp;
        num=num/2;
        temp=temp*10;
    }*/
    while(tc){
        cin>>num;
        for(i=1;i<=num;i++)
            {
            temp=1,sum=0;
            ptc=i;
            while(ptc){
        rem=ptc%2;
        sum=sum+rem*temp;
        ptc=ptc/2;
        temp=temp*10;

        }
            cout<<sum<<" ";
        }
        cout<<endl;
        tc--;

    }

    return 0;
}
