#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *s;
public:
    String()
    {
        s= new char[100];
    }
    void getString()
    {
        cin>>s;
    }
    String operator+(String &ob)
    {
        String temp;
        strcpy(temp.s,s);
        strcat(temp.s,ob.s);
        return temp;
    }
    int operator==(String &ob)
    {
        if(strcmp(s,ob.s)==0)
            return 1;
        else
            return 0;
    }
   int operator>(String &ob)
    {
        if(strcmp(s,ob.s)>0)
            return 1;
        else
            return 0;
    }
    int operator<(String &ob)
    {
        if(strcmp(s,ob.s)<0)
            return 1;
        else
            return 0;
    }
    void display()
    {
        cout<<s<<"\n";
    }
};
int main()
{
    String s1,s2,s3;
    s2.getString();
    s3.getString();
    s1 = s2 + s3;
    s1.display();
    if(s2 == s3)
        cout<<"\nStrings are equal\n";
    else if(s2 > s3)
        cout<<"\nString 2 is greater than String 3\n";
    else if(s2 < s3)
        cout<<"\nString 2 is less than String 3\n";

}
