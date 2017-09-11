#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    for(int i=0;i<n;i++){
        int x = a[i];
        int c=0;
        for(int j=i;j<n;j++){
            if(x==a[j]){
            a[j]+=c;
            c++;
            }
        }
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}
