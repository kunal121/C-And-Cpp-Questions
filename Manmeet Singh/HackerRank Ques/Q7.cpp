#include <iostream>

using namespace std;
class Student{
    protected:
    int r;
    string n;
    public:
    Student(int rno,string name){
        r=rno;
        n=name;
    }
};
class Marks:public Student{
    protected:
    int m[3];
    public:
    Marks(int rno,string name,int marks[3]):Student(rno,name){
        for(int i=0;i<3;i++)
            {
            m[i]=marks[i];
        }
    }

};
class Result:public Marks {
    public:
    Result(int rno,string name,int marks[3]):Marks(rno,name,marks){
     cout<<r<<endl<<n<<endl<<m[0]+m[1]+m[2];
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
