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
        l=0;
    }
    str(char *s1)
    {
        l=strlen(s1);
        strcpy(s,s1);
    }

};
int main()
{
    str s1("welcome","chitkara");
}
