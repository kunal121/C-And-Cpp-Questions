#include <iostream>
#include<string.h>

using namespace std;
class Student
{
    protected:
        int roll;
    char n[20];
    public:
        Student(int rno,char name[20])
            {
            roll=rno;
            strcpy(n,name);
        }
    
};
class Marks:public Student
{
    protected:
        int mark[3],i,total=0;
    public:
        Marks(int rno,char name[20],int marks[3]):Student(rno,name)
            {
            for(i=0;i<3;i++)
                {
                mark[i]=marks[i];
                total=total+mark[i];
            }
        }
};
class Result:public Marks
    {
    public:
        Result(int rno,char name[20],int marks[3]):Marks(rno,name,marks)
            {
            cout<<roll<<"\n"<<n<<"\n"<<total;
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
