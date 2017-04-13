/**
*	This is solution to hackerrank problem : Between two sets of Implementation domain
*	Link to question : https://www.hackerrank.com/challenges/between-two-sets
**/
#include <iostream>
using namespace std;


int main(){
    int n,temp;
    int m,count=0,count1=0,result=0;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    for(int i=a[0];i<=b[m-1];i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                count++;
            }
        }
        if(count==n)
        {
            count1=0;
            for(int k=0;k<m;k++)
            {
                if(b[k]%i==0)
                    count1++;
            }
            if(count1 == m)
            {
                result++;
            }
        }
    }
    cout << result;
    return 0;
}