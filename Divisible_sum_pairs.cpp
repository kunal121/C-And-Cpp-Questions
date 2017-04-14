/**
*	This is solution to hackerrank problem Divisible sum pairs of implelentation domain
*	Link to question : https://www.hackerrank.com/challenges/divisible-sum-pairs
**/
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = a[i] + a[j];
            if(sum % k == 0)
                count++;
        }
    }
    cout << count;
    return 0;
}
