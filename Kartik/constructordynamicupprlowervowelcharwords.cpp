#include<iostream>
#include<string.h>
using namespace std;
class test
{
    int i,lower=0,upper=0,vowel=0,space=0,words=0,chars=0;
    char *str;
public:
    test(int a)
    {
        i=a;
        str=new char(i);
        cout<<"Enter the string\n";
        cin>>str;
    }
    void status()
    {
        int j,alen;

        for(j=0;j<i;j++)
        {
            if(str[j]>=97 && str[j]<=122)
            {
                lower++;
            }
            if(str[j]>=65 && str[j]<=90)
            {
                upper++;
            }
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
            {
                vowel++;
            }
            if(str[j]==' ')
            {
                space++;
            }
            if(str[j]!='\o')
            {
                chars++;
            }
        }
        words=space+1;
    }
    void show()
    {
        cout<<"The number of uppercase are "<<upper<<" Lower case are "<<lower<<" vowel are "<<vowel<<" character are "<<chars<<" words are "<<words<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of string\n";
    cin>>n;
    test obj1(n);
    obj1.status();
    obj1.show();
    return 0;
}

