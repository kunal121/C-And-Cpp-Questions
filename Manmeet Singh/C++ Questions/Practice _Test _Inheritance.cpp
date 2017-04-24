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


class student
{
  protected:
    int rollno;
    char name[20];
  public:
    student(int r,char n[20])
    {
        rollno=r;
        strcpy(name,n);
    }

};


class marks: public student
{
   protected:
     int mar[3];
   public:
    marks(int r,char n[20],int m1,int m2,int m3):student(r,n)
    {
        mar[0]=m1;
        mar[1]=m2;
        mar[2]=m3;
    }

};

class result: public marks
{
   int total,i;
   public:
    result(int r,char n[20],int m1,int m2,int m3):marks(r,n,m1,m2,m3)
    {

    }
    void display()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
        for(i=0;i<3;i++)
        {
            total=total+mar[i];
        }
        cout<<total;

    }

};



int main()
{
   int r,m1,m2,m3;
   char n[20];
   //cout<<"Enter the student rollno., name and marks for 3 subjects:"<<endl;
   cin>>r;
   cin.get();
   cin.getline(n,20);
   cin>>m1>>m2>>m3;
   result R(r,n,m1,m2,m3);
   //cout<<"The student details (rollno., name , total marks)are: "<<endl;
   R.display();
    return 0;
}
