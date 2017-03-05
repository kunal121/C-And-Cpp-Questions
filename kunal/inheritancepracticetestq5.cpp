#include <iostream>

using namespace std;

class Base
{
   public:
      char *name;
      int roll;
      void get();
};

class Internal: public Base
{
    public:
    int M1, M2,M3,M4;
    void getIMarks();
     };
class External
{
    public:
    int E1, E2,E3,E4;
    void getEMarks();
};

class Complete_Info :public Internal,public External
{
    public:
    Complete_Info()
    {

    }
    void Display()
    {
        int internal=M1+M2+M3+M4;
        int external=E1+E2+E3+E4;
        int total=M1+M2+M3+M4+E1+E2+E3+E4;
        cout<<name<<" ";
        cout<<roll<<" ";
        cout<<internal<<" ";
        cout<<external<<" ";
        cout<<total<<" ";
        if(total>=81&&total<101)
        {
            cout<<'A';
        }
        else if(total>=61&&total<81)
        {
            cout<<'B';
        }
        else if(total>=41 && total<61)
        {
            cout<<'C';
        }
        else
        {
            cout<<'R';
        }

    }
};

void Base::get()
{
    name=new char [50];
    cin>>name>>roll;
}
void Internal::getIMarks()
{
    cin>>M1>>M2>>M3>>M4;
}
void External::getEMarks()
{
    cin>>E1>>E2>>E3>>E4;
}
int main(void)
{
  Complete_Info c;
  c.get();
  c.getIMarks();
  c.getEMarks();
  c.Display();
   return 0;
}

