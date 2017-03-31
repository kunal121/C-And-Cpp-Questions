#include <iostream>
using namespace std;
class Sports;
class Test;
class Result;
class Student
{
protected:
    int roll;
public:
    void get_num(int);
    void put_num();
};

void Student::get_num(int x){
    roll = x;
}
void Student::put_num(){
    cout<<roll;
}

class Sports{
protected:
    int sportsMarks;
public:
    void get_score(int x){
        sportsMarks = x;
    }
};
class Test{
protected:
    int sub1,sub2;
public:
    void get_mks(int x,int y){
        sub1 = x;
        sub2 = y;
    }
};
class Result:public Student,public Test,public Sports{
public:
    void display(){
        if(roll>0 && sub1> 0 && sub2 > 0 &&sportsMarks >0 ){
            cout<<"Roll number "<<roll<<endl;
            cout<<"Marks in sub1 "<<sub1<<endl;
            cout<<"Marks in sub2 "<<sub2<<endl;
            cout<<"Score "<<sportsMarks<<endl;
            cout<<"total = "<<sub1+sub2+sportsMarks<<endl;
        }
        else
            cout<<"Wrong Input";
    }
};
int main(){
    int r,sc,s1,s2;
    cin>>r>>s1>>s2>>sc;
    Result obj;
    obj.get_num(r);
    obj.Sports::get_score(sc);
    obj.Test::get_mks(s1,s2);
    obj.display();
}
