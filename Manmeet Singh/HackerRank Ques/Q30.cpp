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


stones::stones(){
    cin>>n;
    count=0;
}

int stones::ones(){

    while(n!=0)
        {
        if(n&1==1)
            count++;
        n=n>>1;
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
