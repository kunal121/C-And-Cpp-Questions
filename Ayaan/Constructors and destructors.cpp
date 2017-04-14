#include<iostream>
#include<string.h>
using namespace std;
class data
{
char str[50];
public:
data(char *a)
{
			strcpy(str,a);
}
void show()
{
cout<<str<<endl;
}
void compare(data & b)
{
if(strcmp(str,b.str)==0)
{
			cout<<"Both Objects have same text"<<endl;
}
else
{
			cout<<"Both Objects have different text"<<endl;
}
}
~data()
		{
			cout<<"Release memory allocated to "<<str<<endl;
}
};
int main()
{
data d1("obfuscation");
data d2("obstruction");
d1.show();
d2.show();
d1.compare(d2);
return 0;
}
