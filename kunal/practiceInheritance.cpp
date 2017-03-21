#include<iostream>
#include<string>
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
deptInfo::deptInfo(char *n,char *a,int t)
{
    deptName=new char[10];
    assignedWork=new char[10];
    strcpy(deptName,n);
    strcpy(assignedWork,a);
    time2complete=t;
}
basicInfo::basicInfo(char *n,int e,char g)
{
    name=new char[10];
    strcpy(name,n);
    empId=e;
    gender=g;
}

class employees:public basicInfo,deptInfo
{
    float q=time2complete*00.1;
  public:
    employees(char *n,char *a,int t,char *c,int e,char g):basicInfo(c,e,g),deptInfo(n,a,t)
    {

    }

    void printEmployeeInfo()
    {
        if(time2complete<=0)
        {
            cout<<"Wrong Input";
        }
        else
        {
        cout<<name<<"\n";
         cout<<empId<<"\n";
         cout<<gender<<"\n";
         cout<<deptName<<"\n";
         cout<<assignedWork<<"\n";
         cout<<q;
        }
    }

};

int main()
{
    char *n,g,*dn,*aw;
    int empid,time;
    n=new char[10];
    dn=new char[10];
    aw=new char[10];
    cin>>n>>empid>>g>>dn>>aw>>time;
    //basicInfo o1(n,empid,g);
    //deptInfo o2(dn,aw,time);
    employees *emp=new employees(dn,aw,time,n,empid,g);


emp->printEmployeeInfo();
return 0;
}
