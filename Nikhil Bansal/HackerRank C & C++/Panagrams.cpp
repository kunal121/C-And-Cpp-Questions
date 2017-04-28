#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[1000];
    cin.getline(a,1000);
    int lower[26] = {0},flag=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i]+=32;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        lower[122-a[i]]++;
    }
    for(int i=0;i<26;i++)
    {
        if(lower[i] == 0)
            flag = 1;
    }
    if(flag == 0)
        cout << "pangram";
    else
        cout << "not pangram";
    return 0;
}

