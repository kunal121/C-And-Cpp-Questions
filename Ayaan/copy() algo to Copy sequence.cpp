CODE:
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) 
   {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    int first1, last1, first2;
    cout << "Enter first1, last1 and first2: ";
    cin >> first1 >> last1 >> first2;
    
    if (first2 > first1 || first2 > last1)
    {
        cout << "Error! Can\'t shift to the right!" << endl;
        exit(0);
    }
    vector<int>::iterator f1 = vec.begin() + first1;
    vector<int>::iterator l1 = vec.begin() + last1;
    vector<int>::iterator f2 = vec.begin() + first2;

    copy(f1, l1, f2);
    
    cout << "After copy()" << endl;
    
    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
    {
   	     cout << *itr << " ";
    }
    cout << endl;
}
