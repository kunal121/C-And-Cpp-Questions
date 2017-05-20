#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
class media
{
protected:
    char title[20];
    float price;
public:
    virtual void display()=0;
    media(char *s,float a)
    {
        price=a;
        strcpy(title,s);
    }
};
class book:public media
{
    int pages;
public:
    book(char *t,float p,float pgs):media(t,p)
    {
        pages=pgs;
    }
    void display()
    {
        cout<<"for book\n";
        cout<<title<<endl;
        cout<<price<<endl;
        cout<<pages<<endl;
    }
};
class tape:public media
{
    float time;
public:
    tape(char *t,float p,float tym):media(t,p)
    {
        time=tym;
    }
    void display()
    {
        cout<<"for tape\n";
        cout<<title<<endl;
        cout<<price<<endl;
        cout<<time<<endl;
    }

};

int main()
{
    char title[50];
    float price,time;
    cin.getline(title,50);
    cin>>price>>time;
    book b(title,price,time);

    cin.getline(title,50);
    cin.getline(title,50);
    cin>>price>>time;

    tape t(title,price,time);

    media *p1,*p2;
    p1=&b;
    p2=&t;

    p1->display();
    p2->display();

    return 0;
}
