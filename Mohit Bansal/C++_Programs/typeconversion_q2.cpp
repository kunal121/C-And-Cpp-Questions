#include<iostream>
#include<string.h>
using namespace std;
class string1
{
    char *n;
    int l;
public:
    string1()
    {
        l=0;
    }
    void get()
    {
        char t[20];
        cin>>t;
        n=new char(l+1);
        strcpy(n,t);
    }
    void display()
    {
        cout<<n<<"\n";
    }
    string1(char *s)
    {
        l=strlen(s);
        n=new char(l+1);
        strcpy(n,s);
    }
    operator char*()
    {
        char *p;
        l=strlen(n);
        p=new char(l+1);
        strcpy(p,n);
        return p;
    }
};
int main()
{
    string1 s1;
    char name[20];
    cin>>name;
    s1=name;
    s1.display();
    string1 s2;
    s2.get();
    char *desig;
    desig=s2;
    cout<<desig<<"\n";
}
