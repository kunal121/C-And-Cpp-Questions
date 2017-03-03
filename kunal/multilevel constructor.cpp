#include<iostream>
#include<string.h>
using namespace std;
class A
{
    int roll;
    string name,branch;
public:
    A(string y,string z,int x)
    {
        roll=x;
        name=y;
        branch=z;
    }
    void display(){cout<<roll<<endl<<name<<endl<<branch<<endl;}
};
class B:public A
{
    int marks[3],i;
public:
  B(int m[3],string x,string y,int z):A(x,y,z)
  {
      for(i=0;i<3;i++)
      {
          marks[i]=m[i];
      }
  }
  void display(){
      for(i=0;i<3;i++)
      {
          cout<<marks[i];
      }}

};
class C:public B
{public:
    C(int m[3],string x,string y,int z):B(m,x,y,z)
    {

    }
};
int main()
{
    int roll,marks[3],i;
    string name,branch;
    cin>>roll>>name>>branch;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
    }
    C ob(marks,name,branch,roll);
ob.B::display();
ob.A::display();
}
