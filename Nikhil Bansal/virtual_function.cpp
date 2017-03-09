#include<iostream>
using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    media(string title1 , int price1)
    {
        title = title1;
        price = price1;
    }
    virtual void input() = 0;
    virtual void display() = 0;
};
class book:public media
{
private:
    int pages;
public:
    book(int page1 , string title1 , int price1):media(title1 , price1)
    {
        pages = page1;
    }
    void display()
    {
        cout << price << endl << title << endl << pages;
    }
};
class tape:public media
{
private:
    int time;
public:
    book(int pages)
};
