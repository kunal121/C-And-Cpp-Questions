#include<iostream>
#include<string.h>
using namespace std;
class String
{
public:
    char *name;
    int l;
    String()
    {
        l=0;
    }
    String(char *name1)
    {
        l = strlen(name1);
        name = new char[l+1];
        strcpy(name,name1);
    }
    void dis()
    {
        cout << name;
    }
    void getdata()
    {
        char t[10];
        cin>>t;
        name=new char[l+1];
        strcpy(name,t);
    }
    operator char*()
    {
        l = strlen(name);
        char *desig;
        desig = new char[l+1];
        strcpy(desig,name);
        return desig;
      //  return name;
    }
};
int main()
{
    String s1;
    char name[20];
    cout << "Enter name";
    cin >> name;
    s1 = name;
    s1.dis();
    String s2;
    s2.getdata();
    char *desig;
    desig = s2;
    cout << desig;
    return 0;
}
