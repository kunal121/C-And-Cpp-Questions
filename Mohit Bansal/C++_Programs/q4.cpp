#include<iostream>
#include<stdio.h>
using namespace std;
class shape
   {
    protected:
            double x;
            double y;
    public:
                void get_data()
                {
                    cout<<"enter length and breadth of required shape";
                        cin>>x>>y;
                }
                    virtual void display_area()
                    {
                    }
    };
class triangle:public shape
 {
        double tr_area;
public:
        void display_area()
        {
            tr_area=0.5*x*y;
            cout<<"\n area of triangle is="<<tr_area<<endl;
        }
};
        class rectangle:public shape
        {
            double rt_area;
public:
            void display_area()
            {
                rt_area=x*y;
                cout<<"\n area of rectangle is="<<rt_area<<endl;
            }
};
int main()
{
        int option;
            shape *pt;
           // shape art;
            triangle t1;
            rectangle r1;

                do
                {
                    cout<<" to computer area of \n t1.triangle="<<"\n t2.rectangle\n t3.exit"<<"\n type(1\2\3) here:";
                    cin>>option;

            switch(option)
                {
                    case 1:
                    cout<<" ** compute area of triangle **\n"<<endl;
                    pt=&t1;
                    pt->get_data();
                    pt->display_area();
                    break;

                    case 2:
                    cout<<"** compute area of rectangle **\n"<<endl;
                    pt=&r1;
                    pt->get_data();
                    pt->display_area();
                    break;
                case 3:
                cout<<"thank you for using this facility....../\n"<<endl;
                break;
                    default:
                    cout<<"your choice unable to understand.........\n";
                }
                }
        while(option!=3);
}
