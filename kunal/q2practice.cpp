#include <iostream>
#include <cstring>
#include <string>
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
     len=strlen(s);
    str=new char [len];
    strcpy(str,s);

}
string1::~string1()
{

}
void string1::decrypt()
{
    int i;

    for(i=0;i<len;i++)
    {
        str[i]=str[i]-3;

    }

}
void string1::show_string1()
{
    cout<<str;
}
int main()
{

	char newstr[100];
	cin>>newstr;
	string1 str1(newstr);
	str1.decrypt();
    str1.show_string1();
	return 0;
}
