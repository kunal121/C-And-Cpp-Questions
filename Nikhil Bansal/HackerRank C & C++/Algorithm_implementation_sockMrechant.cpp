/**
*   This is the solution to the Sock Merchant Problem of Algo Domain on HackerRank
*   Question can be found here : https://www.hackerrank.com/challenges/sock-merchant
*/
#include <iostream>
#include <sstream>

using namespace std;


int main(){
    long int n,count=1,pairs=0;
    cin >> n;
    long int a[n];
    long int temp;
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
    for(int i = 0;i < n;i++){
        if(a[i] == a[i+1])
            count++;
        else
        {
            pairs = pairs + count / 2;
            count=1;
        }
    }
    cout << pairs;
    return 0;
}

