#include <iostream>
using namespace std;
class room
{
protected:
    int length[3],width[3],height[3],i;
public:
    void inputDetails()
    {for(i=0; i<3; i++)

        cin>>length[i]>>width[i]>>height[i];
    }
    void displayDetails()
    {
     for(i=0; i<3; i++)
       { cout<<endl<<"Room Details="<<i+1<<endl;
        cout<<"Length="<<length[i]<<endl<<"Breath="<<width[i]<<endl<<"Height="<<height[i];
       }}
};
class address:public room
{
protected:
    int Hno;
    char city[20],state[20];
public:
    void input()
    {
        cin>>Hno>>city>>state;
        inputDetails();
    }
    void display()
    {
        cout<<"House No="<<Hno<<endl<<"City="<<city<<endl<<"State="<<state<<endl<<"Address is:";
        displayDetails();
    }
};
class house:public room
{
protected:
    char HouseName[20];
public:
    void input()
    {
        cin.ignore();
        cin.getline(HouseName,20);
        inputDetails();
    }
    void display()
    {
        cout<<"House name="<<HouseName<<endl<<"Address is:";
        displayDetails();
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
