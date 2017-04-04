#include <string.h>
#include <iostream>

using namespace std;
class student
{
int roll_no;
protected:
char course[10];
public:
student(int rno,char *c)
{
roll_no=rno;
strcpy(course, c);
}
void show_rno();

};
class result: protected student {
    protected:
    int ma,mb,mc;
    public:
    result(int r,char *c,int m1,int m2,int m3):student(r,c){
        ma=m1;
        mb=m2;
        mc=m3;
    }
    void display(){
        show_rno();
        cout<<course<<endl<<ma+mb+mc;
    }
};

void student::show_rno(){
    cout<<roll_no<<endl;
}
int main() {
int rno,m1,m2,m3;
char course[10];
cin>>rno;
cin.ignore();
cin.getline(course,10);
cin>>m1>>m2>>m3;
result r(rno,course,m1,m2,m3);
r.display();
return 0;
}
