#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class arr{
    private:
        vector<long int> a;
    public:
        void push(long int b){
            a.push_back(b);
        }
        int size(){
            return a.size();
        }
        long int getElement(int index){
            return a.at(index);
        }
};
int main() {
    int n,test;
    long int lastAns = 0;
    cin >> n >> test;
    arr o[n];
    for(int i=0;i<test;i++)
    {
        int a[3];
        for(int j=0;j<3;j++)
            cin >> a[j];
        if(a[0] == 1)
        {
            int index = (a[1] ^ lastAns) % n;
            o[index].push(a[2]);
        }
        if(a[0] == 2)
        {
            int index = (a[1] ^ lastAns) % n;
            int size = o[index].size();
            int ind = a[2] % size;
            lastAns = o[index].getElement(ind);
            cout << lastAns << endl;
        }
    }
    return 0;
}
