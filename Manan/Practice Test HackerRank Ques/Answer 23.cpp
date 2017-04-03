#include <iostream>
using namespace std;
const int size=10;
class country
{
protected:
    char cname[size];
    float pprc;
    float Iprc;
    float ratio;
public:
    virtual void disp()=0;
    country() { }
    virtual void getdata()
    {
        //        cout<<"Enter Country Name ";
        cin>>cname;
        //       cout<<"Enter the % of Polio ";
        cin>>pprc;
        //     cout<<"Enter the % of Literacy ";
        cin>>Iprc;
    }
    virtual void display()
    {

        cout<<"Country Name "<<cname<<endl;
        cout<<"Country Polio% "<<pprc<<endl;
        cout<<"Country Lit. % "<<Iprc<<endl;
        cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl;
    }
};
class state: public country
{

public:

    void disp()
    {
        cout<<"Welcome";
    }


    char sname[size];
    float polio;
    float literate;
    float ratio;

    void getdata()
    {
        cin>>sname;
        cin>>polio;
        cin>>literate;
    }
    void display()
    {
        cout<<"State Name "<<sname<<endl;
        cout<<"%Age of Polio of State "<<polio<<endl;
        cout<<"%Age of Lite. of State "<<literate<<endl;
        cout<<"The Measure of Interdependency "<<float (polio/literate)<<endl;
    }
};


int main()
{
    state s;
    s.country::getdata();
    s.getdata();
    s.disp();
    cout<<endl;
    s.country::display();
    s.display();
    return 0;
}
