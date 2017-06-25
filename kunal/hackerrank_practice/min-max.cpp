#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int i=0,m=0,mi=99999999999;
    long long int sum=0;
    long long int  arr[5];
    for(long long int i = 0; i < 5; i++){
       cin >> arr[i];
    }

    for(int i=0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<5;j++)
        {

            if(j==i)
            {}
            else
            sum=sum+arr[j];
        }
        if(sum>m)
        m=sum ;
    }

    for(int i=0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<5;j++)
        {

            if(j==i)
            {}
            else
            sum=sum+arr[j];
        }
        if(sum<mi)
        mi=sum ;
    }
    cout<<mi<<" "<<m;

    return 0;
}

