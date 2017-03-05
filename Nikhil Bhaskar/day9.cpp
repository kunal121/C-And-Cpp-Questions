#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class factorial
    {

    public:
        int a;
  factorial(int n)
      {
      int i,fact=1;
      for(i=1;i<=n;i++)
          {
          fact=fact*i;
      }
a=fact;
  }
  void dis()
  {
      cout<<a;
  }

};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    factorial ob(n);
ob.dis();
    return 0;
}
