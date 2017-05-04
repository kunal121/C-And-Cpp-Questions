#include<iostream>
using namespace std;
class student
{
   protected:
        int rollno;
   string name;
   public:
    student(string l)
    {
        name=l;
    }
};
class marks
{
protected:
    int a,b,c;
public:
   marks(int x, int y, int z)
   {
       a=x;
       b=y;c=z;
   }
};
class result: public student , public marks
{
protected:
    float per;
    char grade;
public:
    result(string l,int p,int q,int r):student(l),marks(p,q,r)
    {
        per=(float)(p+q+r)/3;
        cout<<"Percentage is "<<per;

    }
};
int main()
{
    result r("sahil" ,50,50,50);
    return 0;

}
