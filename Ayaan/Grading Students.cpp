#include <bits/stdc++.h>
#include<vector>

using namespace std;

void solve(vector < int > grades){
    int l;
    l=grades.size();
    int i,mo,arr[l],mo1;
    for(i=0;i<l;i++)
        {
        mo=grades[i]%5;
        mo1=5-mo;
        if(grades[i]>37 && mo1<3)
            {
            arr[i]=grades[i]+(mo1);
        }
        else
            {
            arr[i]=grades[i];
        }
        mo=0;
    }
    for(i=0;i<l;i++){
        cout<<arr[i]<<endl;
    }
    //return *arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    solve(grades);
    //cout << result << endl;
    return 0;
}
