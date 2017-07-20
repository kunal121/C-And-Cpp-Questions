#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class abc {
    public:
    vector <long long int> a;
};

int main() {

     long long int n,loop,x,y,query,last_Element=0,s,index,seq_num;
    cin>>n;
    abc o[n];
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
        cin>>query>>x>>y;
        if(query==1)
        {
            seq_num=(x^last_Element)%n;
            o[seq_num].a.push_back(y);
        }
        else if(query==2)
        {
            seq_num=(x^last_Element)%n;
            s=o[seq_num].a.size();
            index=y%s;
            last_Element=o[seq_num].a[index];
            cout<<last_Element<<endl;
        }

    }
    return 0;
}

