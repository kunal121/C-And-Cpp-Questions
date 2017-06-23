#include<iostream>
using namespace std;

class str{
int l;
char *s;
public:
str(){
l=0;
}

str(char *s1)
{
l=strlen(s1);
s=new int[l+1];
strcpy(s,s1);
}


str(char &st)
{
l=st.l;
s=new int[l+1];
strcpy(s,st.s);
}

};

int main()
{
str ob;
str ob1("CSE");
ob=ob1;
str ob2(ob1);

}
