#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1,n2;
    cin >> n1;
    string a[n1];
    for(int i=0;i<n1;i++)
        cin >> a[i];
    cin >> n2;
    string b[n2];
    for(int i=0;i<n2;i++)
        cin >> b[i];
    for(int i=0;i<n2;i++){
        int count = 0;
        for(int j=0;j<n1;j++){
            if(b[i] == a[j])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
