#include<iostream>
#include<string.h>
using namespace std;
class fruits
{
      string color1,name1;

  public:
    fruits(string color,string name)
    {
        color1=color;
        name1=name;

    }
    void display()
    {

        cout<<color1<<endl<<name1<<endl;
    }

};
class apple:public fruits
{
    public:
    apple(string color,string name,int rate,string quality):fruits(color,name)
    {
        cout<<"apple is here";
        cout<<rate<<endl<<quality<<endl;

    }

};
class banana:public fruits
{
    public:
    banana(string color,string name,int rate,string quality):fruits(color, name)
    {
        cout<<"banana is here";
        cout<<rate<<endl<<quality<<endl;
    }

};
int main()
{
    char color[50],name[50],quality[50];
    int rate;
    cout<<"enter color";
    cin.getline(color,50);
    cout<<"enter name";
    cin.getline(name,50);
    cout<<"enter rate";
    cin>>rate;
    cout<<"enter quality";
    cin.getline(quality,50);
     cin.getline(quality,50);//write 2 times cin bcoz sometimes multiple string input cause problem
    banana b(color,name,rate,quality);
    b.fruits::display();
    apple a(color,name,rate,quality);

}
