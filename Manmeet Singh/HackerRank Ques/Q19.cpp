#include <iostream>
using namespace std;

class Base {
public:
    char *name;
    int roll;
    void get();
};

class Internal: public Base {
public:
    int M1, M2,M3,M4;
    void getIMarks();
};
class External {
public:
    int E1, E2,E3,E4;
    void getEMarks();
};
void Base::get() {
    name = new char[20];
    cin>>name>>roll;
}
void Internal::getIMarks() {
    cin>>M1>>M2>>M3>>M4;
}
void External::getEMarks() {
    cin>>E1>>E2>>E3>>E4;
}
class Complete_Info:public Internal,public External {
public:
    void Display() {
        int sum = E1+E2+E3+E4+M1+M2+M3+M4;
        cout<<name<<" "<<roll<<" "<<M1+M2+M3+M4<<" "<<E1+E2+E3+E4<<" "<<sum<<" ";
        if(sum<=40)
            cout<<"R";
        else if(sum>40 && sum<=60)
            cout<<"C";
        else if(sum>60 && sum<=80)
            cout<<"B";
        else
            cout<<"A";
    }
};

int main(void)
{
    Complete_Info c;
    c.get();
    c.getIMarks();
    c.getEMarks();
    c.Display();
    return 0;
}
