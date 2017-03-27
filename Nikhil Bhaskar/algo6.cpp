#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float sum=0.0,flag=0.0,result=0.0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)
            {
            sum++;
        }
         else if(arr[arr_i]<0)
            {
            flag++;
        }
         else if(arr[arr_i]==0)
            {
            result++;
        }

    }
    sum=sum/n;
    flag=flag/n;
    result=result/n;
    cout<<sum<<endl<<flag<<endl<<result;
    return 0;
}
