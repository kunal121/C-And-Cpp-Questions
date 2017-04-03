#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,sum=0,flag=0,i,j,k,result;
    cin >> n;
    k=n-1;
    vector< vector<int> > a(n,vector<int>(n));

     for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
     for( i = 0;i < n;i++){
       for( j = 0;j < n;j++){
        if(i==j)
            {
            sum=sum+a[i][j];
        }
       }
    }
     for( i = 0;i < n;i++){
       for( j = 0;j < n;j++){
           if( j==k)
               {
                 flag=flag+a[i][j];
               k--;
           }

       }
    }
  if(flag>0)
      result=flag-sum;
    else
        result=sum-flag;



    cout<<result;
    return 0;
}
