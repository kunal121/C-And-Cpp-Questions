#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class basicInfo
{
    protected:
        char    *name;
        int     empId;
        char    gender;
    public:
        basicInfo(char *n,int e,char g);
};
class deptInfo
{
    protected:
        char    *deptName;
        char    *assignedWork;
        int     time2complete;
    public:
        deptInfo(char *n,char *a,int t);
};
basicInfo::basicInfo(char *n,int e,char g)
    {
   // name=n;
    //empId=e;
    //gender=g;
    cout<<n<<endl<<e<<endl<<g<<endl;

}
deptInfo::deptInfo(char *n,char *a,int t)
    {
    //deptName=n;
    //assignedWork=a;
    float b=(float)(t*0.1);
    cout<<n<<endl<<a<<endl<<b<<endl;
}
class employee:public basicInfo,public deptInfo
    {
  public:
    employee(char *n,int e,char g,char *m,char *a,int t):basicInfo(n,e,g),deptInfo(m,a,t)
        {

    }
    void printEmployeeInfo()
        {

    }
};
int main()
    {
    int e,t,i;
    char n[10],g,m[10],a[10];
    for(i=0;i<5;i++)
        {
        cin>>n[i];
    }
    cin>>e;
    cin>>g;
    for(i=0;i<3;i++)
        {
        cin>>m[i];
    }
    for(i=0;i<2;i++)
        {
        cin>>a[i];
    }
    cin>>t;
    if(t<=0)
        {
        cout<<"Wrong Input";
        exit(0);
    }
  //  basicInfo ba(n,e,g);
    //deptInfo de(m,a,t);
   // else{
    employee em(n,e,g,m,a,t);
    //}
    employee *emp;
        emp=&em;
        emp->printEmployeeInfo();
return 0;
}
