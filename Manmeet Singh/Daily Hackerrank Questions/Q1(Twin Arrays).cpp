#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2){
    int i;
    int n= ar1.size();
    int min1 = INF;
    int secondMin1 = INF;
    int min2 = INF;
    int secondMin2 = INF;
    int minIndex1 = 0;
    int minIndex2 = 0;
    for(i = 0; i < n; i++) {
        if(ar1[i] < min1) {
            secondMin1 = min1;
            min1 = ar1[i];
            minIndex1 = i;
        } else{
              if(ar1[i] < secondMin1) {
              secondMin1 = ar1[i];
              }
          }
    }
    for(i = 0; i < n; i++) {
        if(ar2[i] < min2) {
            secondMin2 = min2;
            min2 = ar2[i];
            minIndex2 = i;
        } else{
              if(ar2[i] < secondMin2) {
                  secondMin2 = ar2[i];
              }
          }
    }
    int ans;
    if(minIndex1 != minIndex2) {
        ans = min1 + min2;
    } else {
        ans = min(min1 + secondMin2, secondMin1 + min2);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}
