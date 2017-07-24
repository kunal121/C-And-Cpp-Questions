#include <iostream>
using namespace std;
class problem{
    public:
    virtual int ones()=0;

};
class stones:public problem{
    private:
    int count,n;
    public:
    stones();
    int ones();
};

stones::stones()
    {
    cin>>n;
    }
int stones::ones()
    {
    int total=0;
    for(count=0;total<n;count++)
        {
        int st=1;
        while(st*2<=(n-total))
            {
            st*=2;
        }
        total+=st;
    }
    return count;
}

int main()
{
    int t;
   cin>>t;
    while(t--)
    { problem *p;
        stones s;
    p=&s;
    cout<<p->ones()<<endl;
    }
    return 0;
}
