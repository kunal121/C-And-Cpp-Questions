#include<iostream>
#include<string.h>
using namespace std;
class str
{
   char name[20];

   public:
   char *s;
   str()
   {

   }
   str(char name1[20])
   {
       strcpy(name,name1);
   }
   void display()
   {
       cout<<name;
   }
   void getdata()
   {
        s=new char[20];
       cin>>s;
   }
   operator char*()
   {
       return s;
   }
};
int main ()
{
    str s1;
    char name[20];
    cin>>name;
    s1=name;
    s1.display();
    str s2;
    s2.getdata();
    char *desig;
    desig=s2;
    cout<<desig;
}

