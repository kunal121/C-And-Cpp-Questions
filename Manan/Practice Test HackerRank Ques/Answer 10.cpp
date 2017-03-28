#include <iostream>
#include<string.h>
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
    name = new char[20];
    strcpy(name,n);
    empId = e;
    gender = g;
}
deptInfo::deptInfo(char *n,char *a,int t)
{
    deptName = new char[20];
    assignedWork = new char[20];
    strcpy(deptName,n);
    strcpy(assignedWork,a);
    time2complete = t;

}
class employee:public basicInfo,public deptInfo
{
public:
    employee(char *n,int e,char g,char *np,char *a,int t):basicInfo(n,e,g),deptInfo(np,a,t)
    {}
    void printEmployeeInfo()
    {
        cout<<name<<endl<<empId<<endl<<gender<<endl<<deptName<<endl<<assignedWork<<endl<<0.1*time2complete;
    }
};
int main()
{
    char name[20],dptName[20],AssgndWork[20],gender;
    int empId,time;
    cin>>name>>empId>>gender>>dptName>>AssgndWork>>time;
    employee *emp;
    employee e(name,empId,gender,dptName,AssgndWork,time);
    emp = &e;
    if(time<=0)
        cout<<"Wrong Input";
    else
        emp->printEmployeeInfo();
    return 0;
}
