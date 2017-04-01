#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int count;
        cin >> n;
        for(int i=1;;i++)
        {
            count=0;
            for(int j = 1;j<=n;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count == n)
            {
                cout  << i << endl;
                break;
            }
        }
    }
    return 0;
}

