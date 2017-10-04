#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,rot,i;
    cin >> n >> rot;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    /*for(i=0;i<rot;i++){
        for(int j=0;j<(n-1);j++){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            a[j+1]=a[j]+a[j+1]-(a[j]=a[j+1]);
        }
    }*/
    rot=rot%n;
    for(i=rot;i<n;i++)
        cout << a[i] << " ";
    for(i=0;i<rot;i++)
        cout << a[i] << " ";
    return 0;
}

