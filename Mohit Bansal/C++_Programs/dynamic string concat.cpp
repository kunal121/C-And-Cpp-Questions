#include<iostream>
#include<string.h>
using namespace std;
class concat
{
    int l;
    char *s;
public:
    concat()
    {
        l=0;
    }
    concat(char *s1)
    {
        l=strlen(s1);
        s=new char[l+1];
        strcpy(s,s1);
    }
    void concatanate(concat s1,concat s2)
    {
        l=s2.l+s1.l;
        s=new char[l+1];
        strcpy(s,s1.s);
        strcat(s,s2.s);
    }
    void show()
    {
        cout<<s<<"\n";
        cout<<l;
    }
};
int main()
{
    concat s1("welcome");
    concat s2("cse");
    concat s3;
    s3.concatanate(s1,s2);
    s3.show();
}
