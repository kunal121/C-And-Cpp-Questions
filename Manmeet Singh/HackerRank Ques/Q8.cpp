#include <iostream>
#include <string.h>
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
basicInfo::basicInfo(char *n,int e,char g){
    name=new char[strlen(n)];
    strcpy(name,n);
    empId=e;
    gender=g;
}
deptInfo::deptInfo(char *n,char *a,int t){
        deptName=new char[strlen(n)];
        assignedWork=new char[strlen(a)];
        strcpy(deptName,n);
        strcpy(assignedWork,a);
        time2complete=t;
}

class employee:public basicInfo,public deptInfo{
    public:
    employee(char *na,int em, char ge,char *de,char *as,int ti):basicInfo(na,em,ge), deptInfo(de,as,ti){};
    void printEmployeeInfo(){
     cout<<name<<endl<<empId<<endl<<gender<<endl<<deptName<<endl<<assignedWork<<endl<<time2complete*0.1<<endl;
    }

};

int main(){
    int em,ti;
    char na[20],ge,de[20],as[10];

    cin>>na>>em>>ge>>de>>as>>ti;

    employee *emp=new employee(na,em,ge,de,as,ti);

     if(ti<=0)
        cout<<"Wrong Input";
    else

emp->printEmployeeInfo();
return 0;
}
