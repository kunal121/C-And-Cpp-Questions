#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
class MyBook:protected Book
    {
    public:
    int p;
    string tit,aut;
    MyBook(string t,string a,int price):Book(t,a)
        {
        tit=t;
        aut=a;
        p=price;
    }
       void display()
            {
            cout<<"Title: "<<tit<<endl<<"Author: "<<aut<<endl<<"Price: "<<p;
        }
};
    
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
