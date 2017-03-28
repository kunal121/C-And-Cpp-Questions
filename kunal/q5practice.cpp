
using namespace std;
class Sports;
class Test;
class Result;
class Student
 { 	protected:
    int roll;
 public:
  void get_num(int);
  void put_num();
 };
 void Student::get_num(int r)
{
    roll=r;
}
class Test
{
    protected:
    int m1,m2;
    public:
    void get_mks(int s1,int s2)
    {
        m1=s1;
        m2=s2;
    }
};
class Sports
{
    protected:
    int sports;
    public:
    void get_score(int sc)
     {
        sports=sc;
    }
};
class Result:public Student,public Test,public Sports
{
    protected:
    int total;
    public:
    void display()
    {
    if(roll&&m1&&m2&&sports&&total >0)
     {
    cout<<"Roll number"<<" "<<roll<<"\n";
    cout<<"Marks in sub1"<<" "<<m1<<"\n";
    cout<<"Marks in sub2"<<" "<<m2<<"\n";
    cout<<"Score"<<" "<<sports<<" "<<"\n";
    total=m1+m2+sports;
    cout<<"total"<<" "<<"="<<" "<<total;
    }
    else
     {
        cout<<"Wrong Input";
    }
    }
};
int main()
{
int r,sc,s1,s2;
cin>>r>>s1>>s2>>sc;
Result obj;
obj.get_num(r);
obj.Sports::get_score(sc);
obj.Test::get_mks(s1,s2);
obj.display();
}
