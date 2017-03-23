#include <iostream>
#include <string.h>

using namespace std;
class Student
    {
    protected:
    int id;
    char name[200];
    public:
    Student(int i,char *s)
        {
        id = i;
        strcpy(name,s);
    }
};
class Marks
    {
    protected:
    int mark_sum=0;
    public:
    Marks(int *m)
        {
        int i = 0;
        while(i<3)
            {
            mark_sum = mark_sum +m[i];
            i++;
        }
    }
};
class Result:protected Student,protected Marks
    {
    public:
    Result(int rno,char *s,int *m):Student(rno,s),Marks(m)
        {
        cout<<rno<<endl<<name<<endl<<mark_sum;
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
