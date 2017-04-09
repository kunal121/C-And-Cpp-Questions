#include <cstring>
#include <iostream>
using namespace std;
class str
    {
    char s[50];
    public:
    	////Write Code Here
void set()
    {
    cin>>s;
}
int operator ==(str &ob1)
    {
    if(strcmp(s,ob1.s)==0)
        return 1;
    else
        return 0;    
}
int operator >(str &ob1)
    {
    if(strcmp(s,ob1.s)>0)
        return 1;
    else
        return 0;    
}
int operator <(str &ob1)
    {
    if(strcmp(s,ob1.s)<0)
        return 1;
    else
        return 0;    
}
};
int main() {
    str s1,s2;
    s1.set();
    s2.set();
    if(s1==s2)
           cout<<"Both strings are equal";
    else if(s1<s2)
            cout<<"String 1 is smaller than string 2";
    else if (s1>s2)
            cout<<"String 1 is greater than string 2";
        return 0;
}


