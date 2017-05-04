#include<iostream>
using namespace std;

class fruit
{
    public:
        virtual void taste()=0;
        void show()
        {
           cout<<"I am a fruit";
        }
};
class mango:public fruit
{
    public:
       void taste()
        {
            cout<<"Mango is sweet"<<"\n";
        }
};
class orange:public fruit
{
    public:
        void taste()
        {
            cout<<"Orange is sour \n";
        }
};
class alfanso:public mango
{};
int main()
{

    fruit *fra;
    mango m;
    orange o;
    alfanso a;
    fra=&m;
    fra->taste();
    fra=&o;
    fra->taste();
    fra=&a;
    fra->taste();
    return 0;

}
