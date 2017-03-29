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
class Student
    {
    public:
    Student(int roll,char *name)
        {
cout<<roll<<endl<<name<<endl;
    }
};
class Marks:public Student
    {
    public:
    int sum=0,i;
  Marks(int roll,char *name,int marks[3]):Student(roll,name)
      {
        for(i=0;i<3;i++)
            {
           sum=sum+marks[i];
        }
      cout<<sum;
  }
};
class Result:public Marks
    {
    public:
  Result(int roll,char *name ,int marks[3]):Marks(roll,name,marks)
      {

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
