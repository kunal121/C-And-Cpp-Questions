#include<iostream>
using namespace std;
class time
{
    int hr,min;
public:
    void input()
    {
        cout<<"enter hrs";
        cin>>hr;
        cout<<"enter min";
        cin>>min;
    }
    void dis()
    {
        cout<<hr<<"hrs and"<<min<<"min";
    }
    time add(time t1)
    {
        time t;
        int rem;
        t.hr=hr+t1.hr;
        t.min=min+t1.min;
        if(t.min>59)
        {
            rem=t.min%60;
            t.min=t.min/60;
            t.hr=t.hr+t.min;
            t.min=rem;
        }
        return t;
    }
};
int main()
{
    time o,o1,o2;
    o.input();
    o1.input();
    o2=o.add(o1);
    o2.dis();
}
