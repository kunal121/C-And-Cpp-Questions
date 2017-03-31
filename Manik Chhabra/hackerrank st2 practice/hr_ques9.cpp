#include <iostream>
using namespace std;
class room
{
    protected:
        int l[3],b[3],h[3];
    public:
        
};
class address:public room
{
    protected:
        int houseNo,i;
        char city[20],state[20];
    public:
        void input()
            {
            cin>>houseNo>>city>>state;
            for(i=0;i<3;i++)
                {
                cin>>l[i]>>b[i]>>h[i];
            }
        }
        void display()
            {
            cout<<"House No="<<houseNo<<"\n"<<"City="<<city<<"\n"<<"State="<<state<<"\n"<<"Address is:"<<"\n";
            for(i=0;i<3;i++)
                {
                cout<<"Room Details="<<i+1<<"\n";
                cout<<"Length="<<l[i]<<"\n";
                cout<<"Breath="<<b[i]<<"\n";
                cout<<"Height="<<h[i]<<"\n";
            }
        }
};
class house:public room
{
    protected:
        char houseName[30];
        int i;
    public:
        void input()
            {
            cin.ignore();
            cin.getline(houseName,30);
            for(i=0;i<3;i++)
                {
                cin>>l[i]>>b[i]>>h[i];
            }
        }
    void display()
            {
            cout<<"House name="<<houseName<<"\n"<<"Address is:"<<"\n";
            for(i=0;i<3;i++)
                {
                cout<<"Room Details="<<i+1<<"\n";
                cout<<"Length="<<l[i]<<"\n";
                cout<<"Breath="<<b[i]<<"\n";
                cout<<"Height="<<h[i]<<"\n";
            }
        }
};
int main()
{
    int option;
    //cout<<"enter 1 for (address+room) and 2 for (house+room)";
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
