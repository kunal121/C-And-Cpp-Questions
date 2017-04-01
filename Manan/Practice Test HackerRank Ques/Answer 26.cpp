#include <iostream>
#include<cstring>
using namespace std;
class Book
{
	protected:
char title[64];
char author[100];
char publisher [100];
float price;
public:
void get();
void display();
};

class Pages
{
protected:
int pages;
public:
void get();
void display();
};

class Library: public Book,public Pages
{
public:
	void Search(Library[],char*,int);
	void get();
};
void Book::get()
    {
    cin>>title>>author>>publisher>>price;
}
void Book::display()
    {
    cout<<title<<endl<<author<<endl<<publisher<<endl<<price<<endl;
}
void Pages::get()
    {
    cin>>pages;
}
void Pages::display()
    {
    cout<<pages;
}
void Library::get()
    {
    Book::get();
    Pages::get();
}
void Library::Search(Library *l,char *s,int size)
    {
    int i,f = 0;
    for(i=0;i<size;i++)
        {
        if(strcmp(l[i].title,s)==0)
            {
            l[i].Book::display();
            l[i].Pages::display();
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"NOT FOUND";

}
int main()
{
	int n;
	cin>>n;
	Library lib[n];
	for(int i=0;i<n;i++)
	{
	  lib[i].get();
	}
char title[100];
cin>>title;
lib[0].Search(lib,title,n);
return 0;
}

