#include<iostream>
#include<string.h>
using namespace std;
class apk
{
public:
    char name[100];
    void get()
    {
        cin.getline(name,100);
    }
    void dis()
    {
        cout<<name<<endl;
    }

};
class is:public apk
{
public:
    int a;
    void input()
    {
        cin>>a;
        cout<<"hello";
    }
    void display()
    {
        cout<<a;
         cout<<"hello";
    }
};

int main()
{
    apk ob;
    apk *p;
    p=&ob;
    p->get();
    p->dis();
    static_cast<is*>(p)->input();
    static_cast<is*>(p)->display();
    return 0;
}
