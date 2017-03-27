#include <iostream>
using namespace std;
class room
{
protected:
    int length,width,height;
public:
    void inputDetails()
    {
        cin>>length>>width>>height;
    }
    void displayDetails()
    {
        cout<<"Length="<<length<<endl<<"Breath="<<width<<endl<<"Height="<<height;
    }
};
class address
{
protected:
    int Hno;
    char city[20],state[20];
    room r[3];
public:
    void input()
    {
        cin>>Hno>>city>>state;
        for(int i=0; i<3; i++)
            r[i].inputDetails();
    }
    void display()
    {
        cout<<"House No="<<Hno<<endl<<"City="<<city<<endl<<"State="<<state<<endl<<"Address is:";
        for(int i=0; i<3; i++)
        {
            cout<<endl<<"Room Details="<<i+1<<endl;
            r[i].displayDetails();
        }

    }
};
class house
{
protected:
    char HouseName[20];
    room x[3];
public:
    void input()
    {
        cin>>HouseName;
        for(int i=0; i<3; i++)
        {
            x[i].inputDetails();
        }
    }
    void display()
    {
        cout<<"House name="<<HouseName<<" House"<<endl<<"Address is:";
        for(int i=0; i<3; i++)
        {
            cout<<endl<<"Room Details="<<i+1<<endl;
            x[i].displayDetails();
        }
    }
};

int main()
{
    int option;
    //cout<<"enter 1 for (address+room) and 2 for (house+room)"<<endl;
    cin>>option;
    if(option==1)
    {
        address a;
        a.input();
        a.display();
    }
    if(option==2)
    {
        house h;
        h.input();
        h.display();
    }
    return 0;
}
