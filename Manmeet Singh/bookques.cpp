#include<iostream>
#include<strings.h>
using namespace std;
class book
{
    char title[100];
    char author[100];
    char publisher[100];
    int price ;
    int stock;
public:
    void getval()
    {
        cout<<"Enter the title, author , publisher , price and stock" <<endl;
        cin>>title>>author>>publisher>>price>>stock;
    }
    void put()
    {
        cout <<"title is "<<title<<"\nAuthor is "<<author<<"\nPublisher is " << publisher <<"\nprice is "<<price <<"\nstock is "<<stock<<endl;
    }
    friend void check(char* , char* , book &);
};
void check (char *a,char *c,book &o)
{
    if (strcmp(a,o.title)==0)
    {
        if (strcmp(c,o.author)==0)
        {
            cout<<"We have this book "<<endl;
        }
    }
}
int main()
{
   book b[3];
   char *p,*q;
   for(int i=0;i<3;i++)
   {
       b[i].getval();
   }
      for(int i=0;i<3;i++)
   {
       b[i].put();
   }
  cout <<"Enter the title and author of the book to be searched "<<endl;
    cin >> p>>q;
    for (int i=0;i<3;i++)
    {
        check(p,q,b[i]);
    }
    return 0;
}
