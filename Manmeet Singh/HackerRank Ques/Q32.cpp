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
class Person
{
protected:
    char name[100];
    char gender;
    int age;
public:
    void ReadData();
    void DisplayData();
};
class Student:public Person
{
protected:
    int rollno;
    char branch[20];
public:
    void ReadData();
    void DisplayData();
};
class Exam:public Student
{
protected:
    int marks[3];
    int total;
public:
    Exam();
    void ReadData();
    void SortMarksWise(Exam[],int);
    void DisplayData(Exam[],int);
};

void Person::ReadData(){
    cin>>name>>gender>>age;
}
void Person::DisplayData(){
    cout<<name<<" "<<gender<<" "<<age<<" ";
}
void Student::ReadData(){
    cin>>rollno>>branch;
}
void Student::DisplayData(){
    cout<<rollno<<" "<<branch<<" ";
}
Exam::Exam(){total=0;}
void Exam::ReadData(){

    Person::ReadData();
    Student::ReadData();
    for(int i=0;i<3;i++){
        cin>>marks[i];
       // total+=marks[i];
    }
    for(int i=0;i<3;i++){
        //cin>>marks[i];
        total+=marks[i];
    }
}
void Exam::SortMarksWise(Exam o[],int n){

       for(int i=0;i<n;i++)
            {
          //  for(int j=0;j<n-i-1;j++){
                if(o[i].total<o[i+1].total){
                    Exam t=o[i];
                    o[i]=o[i+1];
                    o[i+1]=t;


           // }
        }
    }
}
void Exam::DisplayData(Exam o[],int n){
    for(int z=0;z<n;z++)
        {
        o[z].Person::DisplayData();
    o[z].Student::DisplayData();
        cout<<o[z].total<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    Exam objannual[100];
    for(int i=0;i<n;i++)
    {
    objannual[i].ReadData();
    }
    objannual[0].SortMarksWise(objannual,n);
    objannual[0].DisplayData(objannual,n);
    return 0;
}


