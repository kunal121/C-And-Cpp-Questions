/**
*	This is solution to C++ -> Arays Introducion problem on HackerRank
*	Link : https://www.hackerrank.com/challenges/arrays-introduction
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=n-1;i>=0;i--)
        cout << a[i] << " ";
    return 0;
}

