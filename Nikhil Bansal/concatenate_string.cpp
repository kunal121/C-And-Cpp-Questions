// Program to concatenate to strings passed in the object using Dynamic Memory Allocation.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
    int l;
    char *s;
public:
    str()
    {
        l = 0;
    }
    str(char *s1)
    {
        l = strlen(s1);
        s = new char[l+1];
        strcpy(s,s1);
    }
    void concatenate(str s1,str s2)
    {
        l = s1.l + s2.l;
        s = new char[l+1];
        strcpy(s,s1.s);
        strcat(s,s2.s);
    }
    void display()
    {
        cout << s;
    }
};
int main()
{
    str s1("Welcome");
    str s2("cse");
    str s3;
    s3.concatenate(s1,s2);
    s3.display();
}
