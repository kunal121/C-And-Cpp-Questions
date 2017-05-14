#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class fine{
    int d1,m1,y1,d2,m2,y2,fine;
    public:


};
int main(){
    fine o1,o2;
    int fine=0;
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
   if(y1>y2){
       fine+=10000;
   }
    else if(y1==y2){
        if(m1>m2){
            fine+=(m1-m2)*500;
        }
        else if(m1==m2) {
            if(d1>d2)
                fine+=(d1-d2)*15;
        }

    }
     cout<<fine;
    return 0;
}
