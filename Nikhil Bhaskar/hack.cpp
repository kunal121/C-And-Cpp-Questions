#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    cin>>n;
    int nmbr[n];
    char name[100][100];
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
     cin>>name[i][j];
    }
    }
     for(i=0;i<n;i++)
    {
    for(j=0;j<10;j++)
    {
     cout<<name[i][j];
    }
    }



    return 0;
}
