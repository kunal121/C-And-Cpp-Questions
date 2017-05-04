#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <numeric>
#include <sstream>
#include<iostream>


using namespace std;
class Student
{
  protected:
  int rno;
  char name[20];
  public:
  Student(char name1[20],int rno1)
  {
      rno=rno1;
      strcpy(name,name1);
  }

};
class Marks
{
  protected:
  int marks[3],i;
  public:
  Marks(int m[3])
  {
      for(i=0;i<3;i++)
      {
          marks[i]=m[i];
      }
  }

};
class Result:public Marks,public Student
{
  protected:
    int total=0;
   public:
   Result(int rno,char name[20],int marks[3]):Marks(marks),Student(name,rno)
   {
        cout<<rno<<"\n";
      cout<<name<<"\n";
      for(i=0;i<3;i++)
      {
          total=total+marks[i];
      }
      cout<<total;

    }

};
int main() {
    int rno,i;
    char name[20];
    int marks[3];
    cin>>rno;
    cin>>name;
    for(i=0;i<3;i++)
        {
        cin>>marks[i];

    }
    Result r(rno,name,marks);
    return 0;
}
