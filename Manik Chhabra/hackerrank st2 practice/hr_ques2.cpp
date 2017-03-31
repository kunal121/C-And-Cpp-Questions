#include <iostream>
#include <string.h>
using namespace std;
class string1
{
	private:
		int len;
		char *str;
	public:
		string1();
        string1(char *s);
        ~string1();
        void show_string1();
        void decrypt( );
};
string1::string1()
    {
    len=0;
}
string1::string1(char *s)
    {
    int x=strlen(s);
    str=new char[x];
    strcpy(str,s);
}
void string1::decrypt()
    {
    int y=strlen(str);
    for(int i=0;i<y;i++)
        {
        str[i]=str[i]-3;
    }
}
void string1::show_string1()
    {
    cout<<str;
}
string1::~string1()
    {
    delete str;
}
int main()
{
	char newstr[100];
	cin>>newstr;
	string1 str1(newstr);
	str1.decrypt();
    str1.show_string1();
}
