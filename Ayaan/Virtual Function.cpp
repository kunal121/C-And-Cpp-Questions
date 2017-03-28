#include<iostream>
using namespace std;

class student
{
    protected:
        int rn;
        char name[20];
    public:
        void getSTUDdet()
        {
            cout<<"Enter Roll Number "<<endl;
            cin>>rn;
            cout<<"Enter Name "<<endl;
            cin>>name;
        }
        void showSTUDdet()
        {
            cout<<"Roll Number "<<rn<<endl;
            cout<<"Name "<<name<<endl;
        }
};
class tests:virtual public student
{
    protected:
        int marks[3];
    public:
        void getMARKS()
        {
            cout<<"Enter test marks"<<endl;
            for (int i=0;i<3;i++)
                cin>>marks[i];
        }

        int sumal_marks()
        {
            int sum=0;
            for (int i=0;i<3;i++)
                sum+=marks[i];
            return sum;
        }
};

class activity:virtual public student
{
    protected:
        int acts[3];
    public:
        void getACTmark()
        {
            cout<<"Enter activity marks"<<endl;
            for(int i=0;i<3;i++)
                cin>>acts[i];
        }

        int sumal_act_marks()
        {
            int sum=0;
            for(int i=0;i<3;i++)
                sum+=acts[i];
            return sum;
        }
};

class result:public activity,public tests
{
    public:
        void sumal()
        {
            cout<<"sum:  "<<(sumal_marks()+sumal_act_marks())<<endl;
        }
};

int main()
{

    result bhav;
    bhav.getSTUDdet();
    bhav.getMARKS();
    bhav.getACTmark();
    bhav.showSTUDdet();
    bhav.sumal();
    return 0;

}
