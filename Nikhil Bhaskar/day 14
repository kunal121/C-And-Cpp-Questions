#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

Difference(vector<int>& a)
    {
    int i,n;
    n=a.size();
    for(i=0;i<n;i++)
        {
        elements.push_back(a[i]);
        
    }
   
}
 void computeDifference()
        {
     int max,i,least,j,temp;
       int n=elements.size();
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<=n-i-1;j++)
            {
           if(elements[j]>elements[j+1])
               {
               temp=elements[j];
               elements[j]=elements[j+1];
               elements[j+1]=temp;
           }
        }
    }
     maximumDifference=elements[n]-elements[0];
 }
    
     
    

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
