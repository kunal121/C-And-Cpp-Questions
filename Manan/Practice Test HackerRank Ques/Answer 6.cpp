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
    str = new char[100];
}

string1::string1(char *s)
{
    str = new char[100];
    strcpy(str,s);
}
string1::~string1()
{
    delete str;
}
void string1::show_string1()
{
    cout<<str;
}
void string1::decrypt()
{
    int i = 0;
    while(strlen(str)!=i)
    {
        str[i] = str[i] -3;
        i++;
    }
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
