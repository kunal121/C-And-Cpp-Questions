#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
class binary
    {
    public:
    void cal(int n)
        {
    int rem,i=0,count=0,flag=1;
        double a[10000];
    while(n!=1)
        {
        n=n/2;
        rem=n%2;
        a[i]=rem;
        i++;
        count++;

    }
        for(i=0;i<count;i++)
          {

            if(a[i]==1 && a[i+1]==1)
            {
               flag++;
            }
        }
    cout<<flag;
    }
};

int main(){
    int n;
    cin >> n;
    binary ob;
    ob.cal(n);
    return 0;
}
